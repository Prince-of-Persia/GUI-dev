#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void write(QString filename)
{
    QFile mFile(filename);
    if (!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "Could not open file for writing";
        return;
    }
    QTextStream out (&mFile);
    out << "Auto generated file!!!";
    mFile.flush();
    mFile.close();
}

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
    QString mFileName = "/home/amir/Documents/Programming/WaCodeAcademy/GUI-dev/11-QFile/myFile.txt";

    write(mFileName);
    read(mFileName);

    return a.exec();
}
