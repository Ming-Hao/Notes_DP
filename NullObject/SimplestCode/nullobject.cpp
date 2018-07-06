#include "nullobject.h"
#include <QDebug>

NullObject* NullObject::singleton = nullptr;

NullObject *NullObject::instance()
{
    if(singleton == nullptr)
        singleton = new NullObject();
    return singleton;
}


NullObject::NullObject() : IObject()
{
    this->singleton = nullptr;
}

void NullObject::show()
{
    qDebug() << "Nothing to show";
}
