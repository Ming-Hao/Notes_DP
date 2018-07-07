#ifndef POSITIVEOFFENSE_H
#define POSITIVEOFFENSE_H

#include "iattackstyle.h"
class PositiveOffense : public IAttackStyle
{
public:
    PositiveOffense();
    virtual void Attack() override;
};

#endif // POSITIVEOFFENSE_H
