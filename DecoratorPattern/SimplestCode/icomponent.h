#ifndef ICOMPONENT_H
#define ICOMPONENT_H

#include <QString>
class IComponent
{
public:
    IComponent();
    virtual ~IComponent() {} 
    virtual QString getDescription() = 0;
    
    QString description;
};

#endif // ICOMPONENT_H
