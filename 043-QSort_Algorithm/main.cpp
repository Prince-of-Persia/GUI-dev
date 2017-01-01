#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    List << 2 << 3 << 0 << 1;

    qSort(List.begin() + 1, List.end() - 1);

    foreach (int i, List)
    {
        qDebug() << i;
    }



    return a.exec();
}
