#ifndef LIVINGROOM_H
#define LIVINGROOM_H

#include "iroombuilder.h"
class LivingRoom : public IRoomBuilder
{
public:
    LivingRoom();
    void BuildWindows() override;
    void BuildDecoration() override;
    void BuildFurniture() override;
    void BuildElectricalAppliances() override;

};

#endif // LIVINGROOM_H
