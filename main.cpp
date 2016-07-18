#include "mailreader.h"
#include <QApplication>

int main(int argc, char ** argv)
{
    QApplication a(argc, argv);

    MailReader view;
    view.setWindowTitle("Outlook Mail Reader");
    view.show();

    return a.exec();
}

