#ifndef MYTABLEDELEGATE_H
#define MYTABLEDELEGATE_H

#include <QItemDelegate>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QSpinBox>
#include <QTableView>
#include <QWidget>
#include <QStyleOptionViewItem>


class MyTableDelegate : public QItemDelegate
{
        Q_OBJECT
public:
    explicit MyTableDelegate(QObject *parent = 0);
    ~MyTableDelegate();

    // Create Editor when we construct MyDelegate
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index);

    // Then, we set the Editor
    void setEditorData(QWidget *editor, const QModelIndex &index);

    // When we modify data, this model reflect the change
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index);

    // Give the SpinBox the info on size and location
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index);

signals:

public slots:

};

#endif // MYTABLEDELEGATE_H
