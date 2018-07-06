#include "tvstation.h"
#include <QDebug>
TVStation::TVStation() : IElement()
{

}

TVStation::~TVStation()
{
    qDebug() << "Delete TVStation";
    for(int i = this->SubElements.size() - 1; i >= 0; i--)
        delete this->SubElements[i];
}


void TVStation::Process()
{
    qDebug() << "-----All shows-----";
    for(unsigned int i = 0; i < this->SubElements.size(); i++)
    {
        IElement* TVshow = this->SubElements[i];
        TVshow->Process();
    }
}
