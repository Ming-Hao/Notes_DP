#ifndef IBASE_H
#define IBASE_H

class IBase
{
public:
    IBase();
    virtual ~IBase();
    virtual void DoSomething() = 0;

};

#endif // IBASE_H
