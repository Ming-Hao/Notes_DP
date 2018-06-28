#ifndef BASICHANDLER_H
#define BASICHANDLER_H

#include "ihandler.h"
class BasicHandler : public IHandler
{
public:
    BasicHandler(const QString& name, unsigned int limit);
};

#endif // BASICHANDLER_H
