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

    //List.removeOne(5); //remove an item

    QListIterator<int> Iter(List); //defualts to index 0 of the list
    Iter.toBack(); //go to the last Item
    while(Iter.hasPrevious())
    {
        qDebug() << Iter.previous();
        if(Iter.hasPrevious())
        {
            qDebug() << "next... " << Iter.peekPrevious(); //peek an item
        }
    }
    //goes from start to end
    while (Iter.hasNext())
    {
        qDebug() << Iter.next();
    }

    /*
    foreach(int mNumber, List)
    {
        qDebug() << mNumber; //print the list
    }
    */
    return a.exec();
}
