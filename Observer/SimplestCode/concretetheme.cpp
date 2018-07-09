#include "concretetheme.h"
#include "iobserver.h"
#include <QDebug>
ConcreteThemeTypeA::ConcreteThemeTypeA() : ISubject()
{

}

void ConcreteThemeTypeA::notify()
{
    qDebug() << "*--*-ThemeA-*--*--Run all observers-----*--*";
    for(IObserver* observer : this->observers) {
        observer->update();
    }
    qDebug() << "  ";
}

void ConcreteThemeTypeA::registerObserver(IObserver *observer)
{
    this->observers.push_back(observer);
}

void ConcreteThemeTypeA::removeObserver(IObserver *observer)
{
    this->observers.removeOne(observer);
}

QString ConcreteThemeTypeA::getType()
{
    return "A";
}

ConcreteThemeTypeB::ConcreteThemeTypeB() : ISubject()
{

}

void ConcreteThemeTypeB::notify()
{
    qDebug() << "--ThemeB--Run all observers----";
    for(IObserver* observer : this->observers) {
        observer->update();
    }
}

void ConcreteThemeTypeB::registerObserver(IObserver *observer)
{
    this->observers.push_back(observer);
}

void ConcreteThemeTypeB::removeObserver(IObserver *observer)
{
    this->observers.removeOne(observer);
}
