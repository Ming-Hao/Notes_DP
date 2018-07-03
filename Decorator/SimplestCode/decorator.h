#ifndef DECORATOR_H
#define DECORATOR_H

#include "icomponent.h"
class Decorator : public IComponent
{
public:
    Decorator(IComponent* component);
    ~Decorator();
    QString getDescription();

private:
    IComponent* component;
};

#endif // DECORATOR_H
