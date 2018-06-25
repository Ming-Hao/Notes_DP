#include "mainwindow.h"
#include <QApplication>
#include "proxyobject.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    IBase* b = new ProxyObject;
    b->DoSomething();
    delete b;
    qDebug() << "---------";
    return a.exec();
}
