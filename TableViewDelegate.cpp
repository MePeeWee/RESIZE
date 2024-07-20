#include <TableDelegate.h>
#include <QTableView>

QWidget *TableViewDelegate::createEditor(QWidget *parent,
                                        const QStyleOptionViewItem &/* option */,
                                        const QModelIndex &/* index */) const
 {
     QTableView *editor = new QTableView(parent);
     //editor->
     //editor->setMinimum(0);
     //editor->setMaximum(100);

     return editor;
 }
