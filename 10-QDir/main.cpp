#include "mainwindow.h"
#include <QApplication>
#include <QtCore/QCoreApplication>
#include <QDebug>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDir myDir;

    foreach (QFileInfo mItem, myDir.drives())
    {
        qDebug() << mItem.absoluteFilePath();
    }


    return a.exec();
}
