#include "roomdirector.h"
#include "iroombuilder.h"
#include <QDebug>
RoomDirector::RoomDirector(IRoomBuilder *srcbuilder)
{
    this->roombuilder = srcbuilder;
}

RoomDirector::~RoomDirector()
{
    delete this->roombuilder;
}

void RoomDirector::Build()
{
    this->roombuilder->BuildWindows();
    this->roombuilder->BuildDecoration();
    this->roombuilder->BuildFurniture();
    this->roombuilder->BuildElectricalAppliances();
    auto Components = this->roombuilder->getComponents();
    for(auto it = Components.constBegin(); it != Components.constEnd(); ++it)
    {
       qDebug() << it.key();
        foreach (QString item, it.value()) {
            qDebug() << "     " << item;
        }
    }
}
