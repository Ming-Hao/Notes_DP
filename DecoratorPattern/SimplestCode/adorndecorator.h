#ifndef ADORNDECORATOR_H
#define ADORNDECORATOR_H

#include "decorator.h"
class AdornDecorator : public Decorator
{
public:
    AdornDecorator(IComponent* component);
    QString getDescription();
};

#endif // ADORNDECORATOR_H
