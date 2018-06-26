#ifndef CONCRETEDECORATOR_H
#define CONCRETEDECORATOR_H

#include "decorator.h"
class ConcreteDecorator : public Decorator
{
public:
    
    ConcreteDecorator(IComponent* component);
    QString getDescription();
};

#endif // CONCRETEDECORATOR_H
