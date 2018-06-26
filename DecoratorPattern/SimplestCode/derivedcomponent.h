#ifndef DERIVEDCOMPONENT_H
#define DERIVEDCOMPONENT_H

#include "icomponent.h"
class DerivedComponent : public IComponent
{
public:
    DerivedComponent();
    QString getDescription();
};

#endif // DERIVEDCOMPONENT_H
