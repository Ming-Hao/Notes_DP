#include "specialmethod.h"
#include <QDebug>

void SpecialMethod::RawRead(const QString &path)
{
    IMethods::RawRead(path);
    this->CallSpecialAPI();
}

void SpecialMethod::RawWrite()
{
    qDebug() << "Special write";
}

void SpecialMethod::CallSpecialAPI()
{
    qDebug() << "Call Special API";
    if(path.contains("txt"))
        qDebug() << "Deal with .txt";
    else if(path.contains("mea"))
        qDebug() << "Deal with .mea";
}
