#ifndef FORWARDITERATOR_H
#define FORWARDITERATOR_H

#include <vector>
#include "iterationhelper.h"

class Object;
class ForwardIterator : public IterationHelper
{
public:
    ForwardIterator(std::vector<Object*> srcitems);
    bool hasNext() ;
    void Next() ;
    Object* Now();
private:
    int index;
    std::vector<Object*> items;
};

#endif // FORWARDITERATOR_H
