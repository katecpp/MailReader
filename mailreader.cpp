#include "mailreader.h"

MailReader::MailReader()
    : m_treeView(this)
{
        loadData();
        m_treeView.setModel(&m_model);
        setFixedSize(m_treeView.sizeHint());
}

void MailReader::loadData()
{
    if (!outlook.isNull())
    {
        Outlook::NameSpace session(outlook.Session());
        session.Logon();
        Outlook::MAPIFolder *folder = session.GetDefaultFolder(Outlook::olFolderInbox);

        Outlook::Items* allMailItems = new Outlook::Items(folder->Items());
        allMailItems->Sort("ReceivedTime");

        QStringList mailSubjectList;
        for (int i = 1; i < 10; i++)
        {
            Outlook::MailItem mail(allMailItems->Item(i));
            mailSubjectList.append(mail.Subject());
            // Use mail.Body() to read contents
        }
        m_model.setData(mailSubjectList);
    }
}
