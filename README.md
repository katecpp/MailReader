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
