#include "chaindemo.h"
#include "irequest.h"
#include "ihandler.h"
#include "doublehandler.h"
#include "roothandler.h"
#include "specialhandler.h"
#include "basichandler.h"
#include "basicrequest.h"
#include <QDebug>
ChainDemo::ChainDemo()
{

}

void ChainDemo::ShowDemo()
{
    IHandler* base = new BasicHandler("base", 1000);
    IHandler* basic2 = new BasicHandler("basic2", 4000);
    IHandler* doubleHandler = new DoubleHandler("doubleHandler", 3000);
    IHandler* rootHandler = new RootHandler("rootHandler", 100);
    IHandler* specialHandler = new SpecialHandler("specialHandler", 7000);

    IRequest* mission = new BasicRequest(8000);
    base->SetNext(basic2)
            ->SetNext(doubleHandler)
                ->SetNext(specialHandler)
                    ->SetNext(rootHandler);
    base->DoRequest(mission);

    delete base;

}
