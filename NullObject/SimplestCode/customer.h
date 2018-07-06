#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
class IObject;
class Customer
{
public:
    Customer(IObject *obj);
    Customer();
    ~Customer();
    void speak();
private:
    IObject* container;
};

#endif // CUSTOMER_H
