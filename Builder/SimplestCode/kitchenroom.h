#ifndef KITCHENROOM_H
#define KITCHENROOM_H

#include "iroombuilder.h"
class KitchenRoom : public IRoomBuilder
{
public:
    KitchenRoom();
    void BuildWindows() override;
    void BuildDecoration() override;
    void BuildFurniture() override;
    void BuildElectricalAppliances() override;
};



#endif // KITCHENROOM_H
