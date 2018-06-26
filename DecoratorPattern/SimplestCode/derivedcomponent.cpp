#include "derivedcomponent.h"

DerivedComponent::DerivedComponent() : IComponent()
{
    this->description = "Derived Component";
}

QString DerivedComponent::getDescription()
{
    return this->description;
}
