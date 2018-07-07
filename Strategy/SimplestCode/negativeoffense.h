#ifndef NEGATIVEOFFENSE_H
#define NEGATIVEOFFENSE_H

#include "iattackstyle.h"
class NegativeOffense : public IAttackStyle
{
public:
    NegativeOffense();
    virtual void Attack() override;
};

#endif // NEGATIVEOFFENSE_H
