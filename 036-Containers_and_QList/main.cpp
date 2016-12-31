#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List; //create new list type int
    for(int i = 0; i < 10; i++)
    {
        List.append(i); // add items to the list
    }

    List.removeOne(5); //remove an item

    foreach(int mNumber, List)
    {
        qDebug() << mNumber; //print the list
    }

    return a.exec();
}
