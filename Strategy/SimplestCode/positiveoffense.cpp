#include "positiveoffense.h"
#include <QtGlobal>
PositiveOffense::PositiveOffense()
{

}

void PositiveOffense::Attack()
{
    int number = 10;
    int randomValue = qrand() % number;
    if(randomValue < 2)
        this->Short();
    else if(randomValue < 5 )
        this->Drop();
    else
        this->Smash();
}
