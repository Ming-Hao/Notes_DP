#include "kitchenroom.h"

KitchenRoom::KitchenRoom() : IRoomBuilder()
{

}

void KitchenRoom::BuildWindows()
{
     this->Windows.push_back("Sliding Window");
}

void KitchenRoom::BuildDecoration()
{
    this->Decoration.push_back("Floor");
    this->Decoration.push_back("Ceiling");
}

void KitchenRoom::BuildFurniture()
{

}

void KitchenRoom::BuildElectricalAppliances()
{
    this->ElectricalAppliances.push_back("Microwave");
    this->ElectricalAppliances.push_back("Dish dryer");
    this->ElectricalAppliances.push_back("Refrigerator");
    this->ElectricalAppliances.push_back("Oven");

}
