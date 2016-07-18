#ifndef MAILDATAMODEL_H
#define MAILDATAMODEL_H

#include <QAbstractListModel>

class MailDataModel : public QAbstractListModel
{
public:
    MailDataModel();
    QVariant data(const QModelIndex &index, int role) const Q_DECL_OVERRIDE;
    int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    void setData(const QStringList& mailSubjects);

protected:
    QStringList m_mailSubjects;
};

#endif // MAILDATAMODEL_H
