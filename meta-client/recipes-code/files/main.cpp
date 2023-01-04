#include <QCoreApplication>
#include "socketclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    socketClass ctest;
    ctest.Connect();

    return a.exec();
}

