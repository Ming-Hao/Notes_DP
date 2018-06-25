#ifndef PROXYOBJECT_H
#define PROXYOBJECT_H

#include "ibase.h"

class RealObject;
class ProxyObject : public IBase
{
public:
    ProxyObject();
    ~ProxyObject();
    void DoSomething() override;

private:
    void PreOperation();
    void PostOperation();

    RealObject* realobj;
};

#endif // PROXYOBJECT_H
