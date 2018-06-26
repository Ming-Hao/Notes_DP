#ifndef EXTENDCOMPONENT_H
#define EXTENDCOMPONENT_H

#include "icomponent.h"
class ExtendComponent : public IComponent
{
public:
    ExtendComponent();
    QString getDescription();
};

#endif // EXTENDCOMPONENT_H
