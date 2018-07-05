#ifndef IAGGREGATE_H
#define IAGGREGATE_H

class IterationHelper;
class IAggregate
{
public:
    IAggregate();
    virtual ~IAggregate() {}
    IterationHelper* getIterator() const { return this->iterator; }

protected:
    virtual void CreateIterator() = 0;
    IterationHelper* iterator;
};

#endif // IAGGREGATE_H
