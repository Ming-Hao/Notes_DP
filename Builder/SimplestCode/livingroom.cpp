#include "livingroom.h"

LivingRoom::LivingRoom() : IRoomBuilder()
{

}

void LivingRoom::BuildWindows()
{

}

void LivingRoom::BuildDecoration()
{
    this->Decoration.push_back("Floor");
    this->Decoration.push_back("Ceiling");
}

void LivingRoom::BuildFurniture()
{
    this->Furniture.push_back("4 Chairs");
    this->Furniture.push_back("2 Tables");
}

void LivingRoom::BuildElectricalAppliances()
{
    this->ElectricalAppliances.push_back("1 TV");
    this->ElectricalAppliances.push_back("1 Air-Conditioner");
    this->ElectricalAppliances.push_back("2 Fans");
    this->ElectricalAppliances.push_back("1 Stereo");
}
