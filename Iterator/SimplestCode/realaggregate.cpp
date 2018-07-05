#include "realaggregate.h"
#include "forwarditerator.h"
#include "objects.h"
RealAggregate::RealAggregate() : IAggregate()
{
    this->InitialItems();
    this->CreateIterator();
}

RealAggregate::~RealAggregate()
{
    for(unsigned int i = 0; i < this->container.size(); i++)
        delete this->container[i];
    delete this->iterator;
}


void RealAggregate::InitialItems()
{
    this->container.push_back(new RealExtendObject("item1"));
    this->container.push_back(new RealExtendObject("item2"));
    this->container.push_back(new ConcreteObject("item3"));
}

void RealAggregate::CreateIterator()
{
    this->iterator = new ForwardIterator(this->container);
}
