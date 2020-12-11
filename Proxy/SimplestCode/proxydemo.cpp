#include "proxydemo.h"
#include "ibase.h"
#include "proxyobject.h"
ProxyDemo::ProxyDemo()
{

}

void ProxyDemo::ShowDemo()
{
    IBase* proxy_obj = new ProxyObject();
    proxy_obj->DoSomething();
    delete proxy_obj;
}
