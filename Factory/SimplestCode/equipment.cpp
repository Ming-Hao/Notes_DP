#include "equipment.h"
#include <QDebug>

IEquipment::IEquipment() : weight(0)
{

}

void IEquipment::FullSet()
{
    this->HeadPart();
    this->BodyPart();
    this->GlovePart();
    this->LegPart();
}

double IEquipment::Weight()
{
    this->FullSet();
    return this->weight;
}

void LightEquipment::HeadPart() { this->weight += 100; }

void LightEquipment::BodyPart() { this->weight += 300;}

void LightEquipment::GlovePart() { this->weight += 30;}

void LightEquipment::LegPart() { this->weight += 250;}

void HeavyEquipment::HeadPart() { this->weight += 400; }

void HeavyEquipment::BodyPart() { this->weight += 1000;}

void HeavyEquipment::GlovePart() { this->weight += 100;}

void HeavyEquipment::LegPart() { this->weight += 550;}
