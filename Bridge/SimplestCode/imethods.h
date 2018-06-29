#ifndef IMETHODS_H
#define IMETHODS_H

#include <QString>
class IMethods
{
public:
    IMethods();
    virtual ~IMethods() {}
    virtual void RawRead(const QString& path) { this->path = path; }
    virtual void RawWrite() = 0;
protected:
    QString path;
};

#endif // IMETHODS_H
