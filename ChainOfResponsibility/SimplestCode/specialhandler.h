#ifndef SPECIALHANDLER_H
#define SPECIALHANDLER_H

#include "ihandler.h"
class SpecialHandler: public IHandler
{
public:
    SpecialHandler(const QString& name, unsigned int limit);
    void DoRequest(IRequest* request) override;
    void Complete(IRequest *request);
};

#endif // SPECIALHANDLER_H
