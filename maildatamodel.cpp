#include "maildatamodel.h"

MailDataModel::MailDataModel()
{
}

int MailDataModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return m_mailSubjects.size();
}

QVariant MailDataModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
    {
        return QVariant();
    }

    if (Qt::DisplayRole == role)
    {
        QVariant variant;
        variant.setValue(m_mailSubjects.at(index.row()));
        return variant;
    }

    return QVariant();
}

void MailDataModel::setData(const QStringList& mailSubjects)
{
    m_mailSubjects = mailSubjects;
}
