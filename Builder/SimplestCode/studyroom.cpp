#include "studyroom.h"

StudyRoom::StudyRoom() : IRoomBuilder()
{

}

void StudyRoom::BuildWindows()
{
    this->Windows.push_back("Casement Window");
}

void StudyRoom::BuildDecoration()
{
    this->Decoration.push_back("Floor");
    this->Decoration.push_back("Ceiling");
    this->Decoration.push_back("Curtain");
}

void StudyRoom::BuildFurniture()
{
    this->Furniture.push_back("Bed");
    this->Furniture.push_back("2 Chairs");
    this->Furniture.push_back("1 Table");
    this->Furniture.push_back("BookShelf");
}

void StudyRoom::BuildElectricalAppliances()
{
    this->ElectricalAppliances.push_back("1 Air-Conditioner");
    this->ElectricalAppliances.push_back("1 Fan");
}
