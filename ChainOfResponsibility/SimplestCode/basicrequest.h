#ifndef BASICREQUEST_H
#define BASICREQUEST_H

#include "irequest.h"
class BasicRequest : public IRequest
{
public:
    BasicRequest(unsigned int size);
};

#endif // BASICREQUEST_H
