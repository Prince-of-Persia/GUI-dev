#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QtGui>
#include <QtCore>

/*
 * After Qt5 most QtGui functionality is being alled
 * QtWidgets, that's why #include <QtWidgets> is added
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("My app");

    QGridLayout *layout = new QGridLayout; //crate the layout

    QLabel *label1 = new QLabel("First Name: "); //create a label
    QLineEdit *txtName1 = new QLineEdit;   // create a text box

    QLabel *label2 = new QLabel("Familly Name: "); //create a label
    QLineEdit *txtName2 = new QLineEdit;   // create a text box

    QLabel *label3 = new QLabel("Age: "); //create a label
    QLineEdit *txtName3 = new QLineEdit;   // create a text box

    QPushButton *submit = new QPushButton("Submit");

    layout->addWidget(label1, 0, 0); //add objects to the grid
    layout->addWidget(txtName1, 0, 1);

    layout->addWidget(label2, 1, 0); //add objects to the grid
    layout->addWidget(txtName2, 1, 1);

    layout->addWidget(label3, 2, 0); //add objects to the grid
    layout->addWidget(txtName3, 2, 1);

    layout->addWidget(submit, 4, 0, 1, 2); // <x>, x-pos, y-pos, x-span, y-span

    window->setLayout(layout); //add layout to the window

    window->show();
    return a.exec();
}
