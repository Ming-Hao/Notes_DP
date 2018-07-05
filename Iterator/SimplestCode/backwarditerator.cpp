#include "backwarditerator.h"


BackwardIterator::BackwardIterator(std::vector<Object *> srcitems) : IterationHelper()
{
    this->items = srcitems;
    this->index = this->items.size() - 1;
}

bool BackwardIterator::hasNext()
{
    if(this->index >= 0)
        return true;
    else
        return false;
}

void BackwardIterator::Next()
{
    this->index -= 1;

}

Object *BackwardIterator::Now()
{
    if(this->index >= 0)
        return this->items[this->index];
    else
        return nullptr;

}
