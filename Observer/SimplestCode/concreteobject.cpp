#include "concreteobject.h"
#include "isubject.h"

#include <QDebug>
#include <QtGlobal>
#include <QTime>
ConcreteObjectTypeA::ConcreteObjectTypeA(const QString &name) : name(name), IObserver()
{

}

void ConcreteObjectTypeA::update()
{
    qDebug() << "Self name"<< this->name;
}

ConcreteObjectTypeB::ConcreteObjectTypeB(int size) : size(size), IObserver()
{

}

void ConcreteObjectTypeB::update()
{
    qDebug() << "Show computing result" << QString::number(this->morecomputing(this->size));
}

double ConcreteObjectTypeB::morecomputing(int num)
{
    QTime t = QTime::currentTime();

    qsrand(t.msec() / 2 + t.second());

    int n = qrand();

    return n * 0.91 + num * 0.17;
}

ConcreteObjectTypeC::ConcreteObjectTypeC(ISubject *theme)
{
    this->theme = theme;
    this->theme->registerObserver(this);
}

void ConcreteObjectTypeC::update()
{
    if(!this->theme->getType().isEmpty())
    {
        if(this->Isresponse())
            qDebug() << "Type C updating";
        else
            qDebug() << "Type C not updating";
    }
}

bool ConcreteObjectTypeC::Isresponse()
{
    QTime t = QTime::currentTime();

    qsrand(t.msec() + t.second());

   int n = qrand() / 200;

   if(n % 3 == 0)
       return true;
   else
       return false;

}
