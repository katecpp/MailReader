# MailReader
A very simple application for accessing Outlook e-mails with C++/Qt.

## Requirements
- Windows
- Microsoft Outlook (tested with Outlook 14)

## Setup
- Clone repo
- Generate MSOULT.h and MSOUTL.cpp files:

`<PATH_TO_QT>\5.5\mingw492_32\bin\dumpcpp.exe <PATH_TO_MICROSOFT_OFFICE>\Office14\MSOUTL.OLB -o MSOUTL`
- Copy and paste MSOULT.h and MSOUTL.cpp to repository folder

I did not include MSOULT.h and MSOUTL.cpp to repository because of licence rights (I don't know if it would be legal) and also because different versions of Outlook may produce/require different MSOUTL.

## Troubleshooting

* Problem
`error: use of enum MsoFeatureInstall without previous declaration`

Solution from http://www.qtcentre.org/archive/index.php/t-8811.html . Edit MSOULT by hand:

```
// Referenced namespace
namespace Office {

enum MsoFeatureInstall {
msoFeatureInstallNone = 0,
msoFeatureInstallOnDemand = 1,
msoFeatureinstallOnDemandWithUI = 2
};

// forward declarations
class Assistant;
class COMAddIns;
class LanguageSettings;
class AnswerWizard;
enum MsoFeatureInstall;
class CommandBars;
}
```
 
