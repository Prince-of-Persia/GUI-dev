#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>
#include <QtWidgets>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if (ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"Cars", "You like cars");
    }
    else
    {
        QMessageBox::information(this,"Cars", "You Don't like cars");
    }
}
