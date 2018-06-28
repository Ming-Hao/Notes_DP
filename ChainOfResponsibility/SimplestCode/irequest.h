#ifndef IREQUEST_H
#define IREQUEST_H

class IRequest
{
public:
    virtual unsigned int getSize() const;
protected:
    IRequest(unsigned int size);
    unsigned int size;
};



#endif // IREQUEST_H
