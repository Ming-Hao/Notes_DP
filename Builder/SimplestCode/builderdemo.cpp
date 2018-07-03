#include "builderdemo.h"
#include "builderPattern/livingroom.h"
#include "builderPattern/studyroom.h"
#include "builderPattern/kitchenroom.h"
#include "builderPattern/roomdirector.h"
#include <QDebug>
BuilderDemo::BuilderDemo()
{

}

void BuilderDemo::ShowDemo()
{
    RoomDirector* livingroom = new RoomDirector(new LivingRoom());
    qDebug() << "LivingRoom build";
    livingroom->Build();

    RoomDirector* stdyroom = new RoomDirector(new StudyRoom());
    qDebug() << "StudyRoom build";
    stdyroom->Build();

    RoomDirector* kitchen = new RoomDirector(new KitchenRoom());
    qDebug() << "KitchenRoom build";
    kitchen->Build();

    delete livingroom;
    delete stdyroom;
    delete kitchen;

}
