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
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    //ui->lineEdit->setText("hello world");
    QMessageBox::information(this, "Title", ui->lineEdit->text()); // how to get the lineEdit info
}
