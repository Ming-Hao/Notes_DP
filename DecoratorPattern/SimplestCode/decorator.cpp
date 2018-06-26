#include "decorator.h"
#include "icomponent.h"


Decorator::~Decorator()
{
    if(component != nullptr)
        delete component;
    component = nullptr;
}

Decorator::Decorator(IComponent *component)
{
    this->component = component;
    this->description = "Decorated " + this->component->getDescription();
}

QString Decorator::getDescription()
{
    return this->description;
}
