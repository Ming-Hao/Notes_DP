#include "negativeoffense.h"
#include <QtGlobal>
NegativeOffense::NegativeOffense()
{

}

void NegativeOffense::Attack()
{
    int number = 10;
    int randomValue = qrand() % number;
    if(randomValue < 2)
        this->Smash();
    else if(randomValue < 5 )
        this->Short();
    else
        this->Drop();
}
