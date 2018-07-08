#include "commandreceiver.h"

#include <QDebug>
CommandReceiver::CommandReceiver(const QString &name)
{
    this->name = name;
}

void CommandReceiver::DoWorkA()
{
    qDebug() << "Cook" << this->name <<"type A work";
}

void CommandReceiver::CancelWorkA()
{
    qDebug() << "Cook" << this->name << "type A work cancel!";
}

void CommandReceiver::DoWorkB()
{
    qDebug() << "Cook" << this->name << "type B work";
}

void CommandReceiver::CancelWorkB()
{
    qDebug() << "Cook" << this->name << "type B work cancel!";
}

void CommandReceiver::DoWorkC()
{
    qDebug() << "Cook" << this->name << "type C work";
}

void CommandReceiver::CancelWorkC()
{
    qDebug() << "Cook" << this->name << "type C work cancel!";
}
