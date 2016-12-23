#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    for (int i = 0; i < 9; i++)
    {
        ui->listWidget->addItem(QString::number(i) + " Item here");
    }

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    item->setText("Fuzzy bunnys of doom");
    item->setTextColor(Qt::red);
}
