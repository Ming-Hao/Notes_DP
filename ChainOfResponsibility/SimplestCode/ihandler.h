#ifndef IHANDLER_H
#define IHANDLER_H

#include <QString>
class IRequest;
class IHandler
{
public:
    //因外部宣告為介面 delete 時是最外面的呼叫，所以解構為public
    virtual ~IHandler();
    virtual IHandler *SetNext(IHandler* next);
    virtual void DoRequest(IRequest* request);
    QString getName() const;
    unsigned int getLimit() const;
protected:
    //繼承之類別可以看到此建構子
    //避免外部宣告new IRequest
    IHandler(const QString &name, unsigned int limit);

    virtual bool IsResovable(IRequest* request);
    virtual void Complete(IRequest* request);
    virtual void PassToNext(IRequest *request);
    virtual void Fail();

    IHandler* nexthandler;
    QString name;
    unsigned int limit;
};

#endif // IHANDLER_H
