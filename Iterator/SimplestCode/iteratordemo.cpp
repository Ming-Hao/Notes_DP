#include "iteratordemo.h"
#include "realaggregate.h"
#include "iterationhelper.h"
#include "objects.h"
IteratorDemo::IteratorDemo()
{

}

void IteratorDemo::ShowDemo()
{
    IAggregate* realAggregate = new RealAggregate();

    auto it = realAggregate->getIterator();
    while (it->hasNext()) {
        it->Now()->printInfo();
        it->Next();
    }
}
