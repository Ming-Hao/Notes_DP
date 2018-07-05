#ifndef BACKWARDITERATOR_H
#define BACKWARDITERATOR_H

#include <vector>
#include "iterationhelper.h"

class Object;
class BackwardIterator : public IterationHelper
{
public:
    BackwardIterator(std::vector<Object*> srcitems);
    bool hasNext() ;
    void Next() ;
    Object* Now();
private:
    int index;
    std::vector<Object*> items;
};
#endif // BACKWARDITERATOR_H
