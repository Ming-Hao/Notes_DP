#ifndef NULLOBJECT_H
#define NULLOBJECT_H

#include "iobject.h"
class NullObject : public IObject
{
public:
    static NullObject* instance() ;
    bool IsNull() override { return true; }
    void show() override;


private:
    NullObject();
    static NullObject* singleton;
};

#endif // NULLOBJECT_H
