#ifndef TABLEVIEWDELEGATE_H
#define TABLEVIEWDELEGATE_H

//#include <QStyledItemDelegate>
#include <QStandardItem>

class TableViewDelegate : public QStandardItem
{
    Q_OBJECT

public:
    TableViewDelegate(QObject *parent = nullptr);

//    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
//                          const QModelIndex &index) const override;

//    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
//    void setModelData(QWidget *editor, QAbstractItemModel *model,
//                      const QModelIndex &index) const override;

//    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
//                              const QModelIndex &index) const override;
};

#endif // TABLEVIEWDELEGATE_H
