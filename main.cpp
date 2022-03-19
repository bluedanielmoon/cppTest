#include "mainwindow.h"

#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    father *s=new son;
    s->goHunt();
    s->note();

    s->note();

    s->note();

    s->note();

    son *ss=dynamic_cast<son*>(s);
    ss->goHunt();
    ss->secondHunt();
    delete s;
    MainWindow w;
    w.show();
    return a.exec();
}
