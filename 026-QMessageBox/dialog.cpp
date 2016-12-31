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
    //info
    QMessageBox::information(this, "Information", "Text here");
}

void Dialog::on_pushButton_2_clicked()
{
    //Question
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Question", "Do you like dogs?", QMessageBox::Yes | QMessageBox::No);
    if  (reply == QMessageBox::Yes)
    {
        QMessageBox::information(this, "Information", "You LOVE Dogs");
    }
    else if (reply == QMessageBox::No)
    {
        QMessageBox::information(this, "Information", "Why NOT???!!");
    }
}

void Dialog::on_pushButton_3_clicked()
{
    //warning
    QMessageBox::warning(this, "warning", "Text here");
}

void Dialog::on_pushButton_4_clicked()
{
    //custom
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,
                          "Custom",
                          "My text here",
                          QMessageBox::YesToAll | QMessageBox::Yes | QMessageBox::No |QMessageBox::NoToAll);
    //Do something with the reply
}
