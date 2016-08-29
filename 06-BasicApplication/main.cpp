#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); //create the application
    QLabel *label = new QLabel("<strong>Hello</strong> world"); //create a label

    label->show(); //show the label

    return app.exec(); //for ever loop
}
