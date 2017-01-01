#include <QCoreApplication>
#include <QStringList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList List;

    List.append("Hello");
    QString line = "a, b, c, d, e, f, g";
    List = line.split(", ");


    foreach(QString itm, List)
    {
        qDebug() << itm;
    }

    return a.exec();
}
