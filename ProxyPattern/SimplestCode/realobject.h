#ifndef REALOBJECT_H
#define REALOBJECT_H

#include "ibase.h"
class RealObject : public IBase
{
public:
    RealObject();
    ~RealObject();
    void DoSomething() override;
};

#endif // REALOBJECT_H
