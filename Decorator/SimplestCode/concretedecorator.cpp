#include "concretedecorator.h"
#include <QDebug>


ConcreteDecorator::ConcreteDecorator(IComponent *component) : Decorator(component)
{
    //呼叫 this->getDescription 已經先跑完Decorator建構子了
   
    this->description = "Concrete " + this->getDescription();
}

QString ConcreteDecorator::getDescription()
{
    return this->description;
}
