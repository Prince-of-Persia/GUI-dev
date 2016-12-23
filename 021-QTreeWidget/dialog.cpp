#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(2);
    AddRoot("1. Hello", "World");
    AddRoot("2. Hello", "World");
    AddRoot("3. Hello", "World");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::AddRoot(QString name, QString Description)
{
    QTreeWidgetItem *item = new QTreeWidgetItem(ui->treeWidget);
    item->setText(0,name);
    item->setText(1, Description);
    ui->treeWidget->addTopLevelItem(item);

    AddChild(item,"one", "hello");
    AddChild(item, "two", "hello");
}

void Dialog::AddChild(QTreeWidgetItem *parent, QString name, QString Description)
{
    QTreeWidgetItem *item = new QTreeWidgetItem();
    item->setText(0,name);
    item->setText(1, Description);
    parent->addChild(item);
}
