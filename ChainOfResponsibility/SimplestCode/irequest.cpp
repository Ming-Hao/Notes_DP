#include "irequest.h"
IRequest::IRequest(unsigned int size)
{
    this->size = size;
}

unsigned int IRequest::getSize() const
{
    return this->size;
}
