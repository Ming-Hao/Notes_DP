#include "ihandler.h"
#include "irequest.h"
#include <QDebug>
IHandler::IHandler(const QString& name, unsigned int limit)
{
    this->name = name;
    this->limit = limit;
    this->nexthandler = nullptr;
}

IHandler::~IHandler()
{
    if(this->nexthandler != nullptr)
        delete this->nexthandler;
    this->nexthandler = nullptr;
}

IHandler* IHandler::SetNext(IHandler *next)
{
    this->nexthandler = next;
    return this->nexthandler;
}

void IHandler::DoRequest(IRequest *request)
{
    if(IsResovable(request))
       this->Complete(request);
    else
        this->PassToNext(request);
}

QString IHandler::getName() const
{
    return this->name;
}

unsigned int IHandler::getLimit() const
{
    return this->limit;
}


bool IHandler::IsResovable(IRequest *request)
{
    if(request->getSize() <= this->limit)
        return true;

    return false;
}

void IHandler::Complete(IRequest *request)
{
    QString str = this->name + " finish size " + QString::number(request->getSize()) + " mission.";
    qDebug() << str;
}

void IHandler::Fail()
{
    qDebug() << "fail this mission.";
}

void IHandler::PassToNext(IRequest *request)
{

    if(this->nexthandler != nullptr)
    {
        qDebug() << this->name << "pass to its next" << this->nexthandler->getName();
        this->nexthandler->DoRequest(request);
    }
    else
    {
        qDebug() << this->name << "pass to its next, but no next.";
        this->Fail();
    }

}


