#include "specialhandler.h"
#include "irequest.h"
#include "QDebug"
SpecialHandler::SpecialHandler(const QString &name, unsigned int limit):
                IHandler(name, limit)
{

}

void SpecialHandler::DoRequest(IRequest *request)
{
    if(IsResovable(request) && this->limit % request->getSize() == 0)
        this->Complete(request);
     else
         this->PassToNext(request);
}

void SpecialHandler::Complete(IRequest *request)
{
    QString str = "Because " + QString::number(this->limit)+ " % " +  QString::number(request->getSize())  + " == 0, " +
                   this->name + " finish size " + QString::number(request->getSize()) + " mission.";
    qDebug() << str;
}
