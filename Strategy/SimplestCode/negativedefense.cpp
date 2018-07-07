#include "negativedefense.h"
#include <QtGlobal>
NegativeDefense::NegativeDefense()
{

}

void NegativeDefense::Defense()
{
    int number = 10;
    int randomValue = qrand() % number;
    if(randomValue < 3)
        this->Clear();
    else
        this->Lob();
}
