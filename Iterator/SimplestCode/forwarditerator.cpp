#include "forwarditerator.h"


ForwardIterator::ForwardIterator(std::vector<Object *> srcitems) : IterationHelper()
{
    this->index = 0;
    this->items = srcitems;
}

bool ForwardIterator::hasNext()
{
    if(this->index < this->items.size())
        return true;
    else
        return false;
}

void ForwardIterator::Next()
{
    this->index += 1;

}

Object *ForwardIterator::Now()
{
    if(this->index < this->items.size())
        return this->items[this->index];
    else
        return nullptr;

}
