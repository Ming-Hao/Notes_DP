#ifndef CONCRETEMETHOD1_H
#define CONCRETEMETHOD1_H

#include "imethods.h"
class ConcreteMethod final: public IMethods
{
public:
    void RawRead(const QString& path) override;
    void RawWrite() override;
private:
    void CallConcreteAPI();
};

#endif // CONCRETEMETHOD1_H
