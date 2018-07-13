#ifndef EQUIPMENT_H
#define EQUIPMENT_H


class IEquipment
{
public:
    IEquipment();
    virtual ~IEquipment() {}
    virtual void FullSet() final;
    virtual void HeadPart() = 0;
    virtual void BodyPart() = 0;
    virtual void GlovePart() = 0;
    virtual void LegPart() = 0;
    virtual double Weight();
protected:
    double weight;
};

class LightEquipment : public IEquipment
{
public:
    LightEquipment() : IEquipment() {}
    virtual ~LightEquipment() {}
    virtual void HeadPart() override;
    virtual void BodyPart() override;
    virtual void GlovePart() override;
    virtual void LegPart() override;
};

class HeavyEquipment : public IEquipment
{
public:
    HeavyEquipment() : IEquipment() {}
    virtual ~HeavyEquipment() {}
    virtual void HeadPart() override;
    virtual void BodyPart() override;
    virtual void GlovePart() override;
    virtual void LegPart() override;
};

#endif // EQUIPMENT_H
