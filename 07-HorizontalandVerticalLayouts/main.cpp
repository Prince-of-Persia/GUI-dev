#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget; //create a window
    window->setWindowTitle("My App"); //set window title

    QPushButton *button1 = new QPushButton("One");      //create some push buttons
    QPushButton *button2 = new QPushButton("Two");
    QPushButton *button3 = new QPushButton("Three");

    QHBoxLayout *hLayout = new QHBoxLayout; // create a horizental layout
    QVBoxLayout *vLayout = new QVBoxLayout; // create a vertical layout

    /*
    hLayout->addWidget(button1); //add created push buttons to
    hLayout->addWidget(button2); //the layut
    hLayout->addWidget(button3);
    */
    vLayout->addWidget(button1); //add created push buttons to
    vLayout->addWidget(button2); //the layut
    vLayout->addWidget(button3);

    //to assign the layout to the window
    //window->setLayout(hLayout); //horizental
    window->setLayout(vLayout);   //vertical

    window->show();//show the window

    return a.exec();
}
