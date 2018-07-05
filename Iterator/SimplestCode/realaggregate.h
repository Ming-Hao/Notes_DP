#ifndef REALAGGREGATE_H
#define REALAGGREGATE_H

#include <vector>
#include "iaggregate.h"
class Object;
class RealAggregate : public IAggregate
{
public:
    RealAggregate();
    ~RealAggregate();


private:
    void CreateIterator() override;
    void InitialItems();

    std::vector<Object*> container;

};

#endif // REALAGGREGATE_H
