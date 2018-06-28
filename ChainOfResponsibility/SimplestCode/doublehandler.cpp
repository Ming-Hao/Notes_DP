#include "doublehandler.h"
#include "irequest.h"
#include <QDebug>
DoubleHandler::DoubleHandler(const QString &name, unsigned int limit):
    IHandler(name, limit)
{

}



bool DoubleHandler::IsResovable(IRequest *request)
{
    if(request->getSize() / 2 <= this->limit)
        return true;
    else
        return false;
}

void DoubleHandler::Complete(IRequest *request)
{
    QString str = "Because " + QString::number(request->getSize()) + " / 2 < " + QString::number(this->limit)  + ", " +
                   this->name + " finish size " + QString::number(request->getSize()) + " mission.";
    qDebug() << str;
}
