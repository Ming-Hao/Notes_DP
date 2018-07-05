#ifndef ITERATIONHELPER_H
#define ITERATIONHELPER_H

class Object;
class IterationHelper
{
public:
    IterationHelper();
    virtual bool hasNext() = 0;
    virtual void Next() = 0;
    virtual Object* Now() = 0;
};

#endif // ITERATIONHELPER_H
