#include "mytabledelegate.h"


MyTableDelegate::MyTableDelegate(QObject *parent):QItemDelegate(parent)
{

}

MyTableDelegate::~MyTableDelegate()
{

}

QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index)
{
    QTableView *editor = new QTableView(parent);
        //editor->setMinimum(0);
        //editor->setMaximum(100);
        return editor;
}
// Then, we set the Editor
void setEditorData(QWidget *editor, const QModelIndex &index)
{}

// When we modify data, this model reflect the change
void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index)
{}

// Give the SpinBox the info on size and location
void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index)
{}
