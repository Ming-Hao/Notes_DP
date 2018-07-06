#include "customer.h"
#include "iobject.h"
#include "nullobject.h"
Customer::Customer(IObject* obj)
{
    if(obj->getName().isEmpty())
        this->container = NullObject::instance();
    else
        this->container = obj;
}

Customer::Customer()
{
    this->container = NullObject::instance();
}

Customer::~Customer()
{
    if(!this->container->getName().isEmpty())
        delete this->container;
}


void Customer::speak()
{
    this->container->show();
}
