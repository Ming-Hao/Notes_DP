#ifndef IFEATURES_H
#define IFEATURES_H

#include <QString>

class IMethods;
class IFeatures
{
public:
    IFeatures();
    virtual ~IFeatures() {}
    virtual void SetMethod(IMethods* srcmethod);
    virtual void Read(const QString& path) = 0;
    virtual void Write() = 0;
protected:
    IMethods* implementmethod;
};

#endif // IFEATURES_H
