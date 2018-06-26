#include "extendcomponent.h"

ExtendComponent::ExtendComponent() : IComponent()
{
    this->description = "Extend Component";
}

QString ExtendComponent::getDescription()
{
    return this->description;
}
