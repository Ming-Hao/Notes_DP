#ifndef ROOTHANDLER_H
#define ROOTHANDLER_H

#include "ihandler.h"

class RootHandler : public IHandler
{
public:
    RootHandler(const QString &name, unsigned int limit);
    bool IsResovable(IRequest* request) override;

};

#endif // ROOTHANDLER_H
