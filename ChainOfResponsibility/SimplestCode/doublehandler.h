#ifndef DOUBLEHANDLER_H
#define DOUBLEHANDLER_H

#include "ihandler.h"
class DoubleHandler : public IHandler
{
public:
    DoubleHandler(const QString &name, unsigned int limit);
    bool IsResovable(IRequest *request) override;
    void Complete(IRequest *request) override;
};

#endif // DOUBLEHANDLER_H
