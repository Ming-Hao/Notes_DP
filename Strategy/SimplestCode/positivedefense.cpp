#include "positivedefense.h"
#include <QtGlobal>
#include <QDebug>
PositiveDefense::PositiveDefense()
{

}

void PositiveDefense::Defense()
{
    int number = 10;
    int randomValue = qrand() % number;
    if(randomValue < 3)
        this->Lob();
    else
        this->Clear();
}

void PositiveDefense::Lob()
{
    qDebug() << "try crosscourt lob";
}

void PositiveDefense::Clear()
{
    qDebug() << "try flat high speed clear";
}
