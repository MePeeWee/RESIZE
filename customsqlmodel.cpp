#include <QtWidgets>

#include "customsqlmodel.h"

CustomSqlModel::CustomSqlModel(QObject *parent)
    : QSqlQueryModel(parent)
{
}

QVariant CustomSqlModel::data(const QModelIndex &index, int role) const
{
   // QVariant value = QSqlQueryModel::data(index, role);

    if (role == Qt::TextAlignmentRole)

    {
    if (index.column() == 1 && role == Qt::TextAlignmentRole)    {  return Qt::AlignVCenter;     }
    else if (index.column() == 9 && role == Qt::TextAlignmentRole)    {  return Qt::AlignVCenter;     }
     else if (index.column() == 11 && role == Qt::TextAlignmentRole)    {  return Qt::AlignVCenter;     }
      else return Qt::AlignCenter;
    }

    else {return QSqlQueryModel::data(index, role);

         }

}
