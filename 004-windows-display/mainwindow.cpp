#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_window_triggered()
{
    /*
     *  With .setModal() method:
     *  user can't interact with the rest of the program
     */

    /*
    MyDialog mDialog;
    mDialog.setModal(false);
    mDialog.exec();
    */

    /*
     * For users to be able to intract with the rest of the program,
     * In mainwindow.h we need to:
     *  1. #include "mydialog.h"
     *  2. create a pointer to the dialog windo
     *
     * Then, an instance of dialog should be created in mainwindow.cpp
     *
     */

    mDialog = new MyDialog(this);
    mDialog->show();
}
