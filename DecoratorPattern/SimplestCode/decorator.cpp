#include "decorator.h"
#include "icomponent.h"


Decorator::~Decorator()
{
    if(component != nullptr)
        delete component;
    component = nullptr;
}
//不寫後面 : IComponent() 也會自動跑無參數的建構子
Decorator::Decorator(IComponent *component) : IComponent()
{
    this->component = component;
    this->description = "Decorated " + this->component->getDescription();
}

QString Decorator::getDescription()
{
    return this->description;
}
