#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void read(QString filename)
{
    QFile mFile(filename);
    if (!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Could not open file for reading";
        return;
    }
    QTextStream in (&mFile);
    QString mTxt = in.readAll();
    qDebug() << mTxt;
    mFile.close();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    read(":/myFile/12-ResourceFiles.pro");

    return a.exec();
}
