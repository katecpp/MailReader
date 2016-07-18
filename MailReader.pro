QT += core axcontainer widgets

TARGET = MailReader
CONFIG += C++14

TEMPLATE = app

SOURCES += main.cpp \
    MSOUTL.cpp \
    mailreader.cpp \
    maildatamodel.cpp

HEADERS += \
    MSOUTL.h \
    mailreader.h \
    maildatamodel.h

