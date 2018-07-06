#include "tvshow.h"
#include <QDebug>
SportsChannel::SportsChannel() : IElement()
{

}

SportsChannel::~SportsChannel()
{
    qDebug() << "sport delete";
    for(int i = this->SubElements.size() - 1; i >= 0; i--)
        delete this->SubElements[i];
}

void SportsChannel::Process()
{
    qDebug() << "Sports show process";
    for(unsigned int i = 0; i < this->SubElements.size(); i++)
    {
        IElement* item = this->SubElements[i];
        item->Process();
    }
}



NewsChannel::NewsChannel() : IElement()
{

}

NewsChannel::~NewsChannel()
{
    qDebug() << "news delete";
    for(int i = this->SubElements.size() - 1; i >= 0; i--)
        delete this->SubElements[i];
}

void NewsChannel::Process()
{
    qDebug() << "News show process";
    for(unsigned int i = 0; i < this->SubElements.size(); i++)
    {
        IElement* item = this->SubElements[i];
        item->Process();
    }
}

MainShow::MainShow() : IElement()
{

}

void MainShow::Process()
{
    qDebug() << "    main show";
}

Advertising::Advertising() : IElement()
{

}

void Advertising::Process()
{
    qDebug() << "    advertising show";
}
