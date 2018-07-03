#include "adorndecorator.h"

AdornDecorator::AdornDecorator(IComponent *component) : Decorator(component)
{
    this->description = "Adorn " + this->getDescription();
}

QString AdornDecorator::getDescription()
{
    return this->description;
}
