#ifndef IROOMBUILDER_H
#define IROOMBUILDER_H

#include <vector>
#include <QHash>
#include <QString>
class IRoomBuilder
{
public:    
    IRoomBuilder();    
    virtual ~IRoomBuilder() {}
    virtual void BuildWindows() = 0;
    virtual void BuildDecoration() = 0;
    virtual void BuildFurniture() = 0;
    virtual void BuildElectricalAppliances() = 0;
    QHash<QString, std::vector<QString>> getComponents();
protected:   
    std::vector<QString> Windows;
    std::vector<QString> Decoration;
    std::vector<QString> Furniture;
    std::vector<QString> ElectricalAppliances;
};

#endif // IROOMBUILDER_H
