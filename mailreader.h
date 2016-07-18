#ifndef MAILREADER_H
#define MAILREADER_H

#include <QWidget>
#include <QTreeView>
#include <MSOUTL.h>
#include <maildatamodel.h>

class MailReader : public QWidget
{
public:
    MailReader();

protected:
    QTreeView m_treeView;
    MailDataModel m_model;
    Outlook::Application outlook;

    void loadData();
};

#endif // MAILREADER_H
