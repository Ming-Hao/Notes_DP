#include "concretemethod.h"
#include <QDebug>

void ConcreteMethod::RawRead(const QString &path)
{
    IMethods::RawRead(path);
    this->CallConcreteAPI();
}

void ConcreteMethod::RawWrite()
{
    qDebug() << "Concrete write";
}

void ConcreteMethod::CallConcreteAPI()
{
    qDebug() << "Cal Concrete API";
    if(this->path.contains("png"))
        qDebug() << "Deal with .png";
    else if(this->path.contains("jpg"))
        qDebug() << "Deal with .jpg";
}
