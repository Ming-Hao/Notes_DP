#ifndef SPECIALMETHOD_H
#define SPECIALMETHOD_H

#include "imethods.h"

class SpecialMethod final: public IMethods
{
public:
    virtual void RawRead(const QString& path) override;
    virtual void RawWrite() override;
private:
    void CallSpecialAPI();
};

#endif // SPECIALMETHOD_H
