#include "nullobjectdemo.h"
#include "iobject.h"
#include "customer.h"
#include "entityobject.h"
NullObjectDemo::NullObjectDemo()
{

}

void NullObjectDemo::ShowDemo()
{
    std::vector<Customer*> people = { new Customer(new EntityObject("person1")),
                                      new Customer(new EntityObject("")),
                                      new Customer(new EntityObject("")),
                                      new Customer(new EntityObject("person4")),
                                      new Customer(new EntityObject("person5")),
                                      new Customer(new EntityObject("")) };
    for(unsigned int i = 0; i < people.size(); i++)
    {
        Customer* person = people[i];
        person->speak();
    }

    for(int i = people.size() - 1;  i >= 0; i--)
        delete people[i];
}
