#include "iroombuilder.h"

IRoomBuilder::IRoomBuilder()
{

}

QHash<QString, std::vector<QString> > IRoomBuilder::getComponents()
{
    QHash<QString, std::vector<QString>> AllComponents;
    AllComponents["Windows"] = this->Windows;
    AllComponents["Decoration"] = this->Decoration;
    AllComponents["Furniture"] = this->Furniture;
    AllComponents["ElectricalAppliances"] = this->ElectricalAppliances;
    return AllComponents;
}
