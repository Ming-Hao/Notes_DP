#include "roothandler.h"
#include "irequest.h"
RootHandler::RootHandler(const QString &name, unsigned int limit):
             IHandler(name, limit)
{

}

bool RootHandler::IsResovable(IRequest *request)
{
    if(std::sqrt(request->getSize()) <= this->limit)
        return true;
    else
        return false;
}
