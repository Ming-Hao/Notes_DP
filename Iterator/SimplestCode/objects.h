#ifndef OBJECTS_H
#define OBJECTS_H
#include <QString>
#include <QDebug>

class Object{
public:
    virtual ~Object() {}
    virtual void printInfo() const {
        qDebug() << "Name" << this->name << ", type" << this->type;
    }
protected:
    QString name;
    QString type;
};

class RealExtendObject : public Object {
public:
    RealExtendObject(const QString& name) : Object() {
        this->name = name;
        this->type = "real";
    }
    void printInfo() const {
        qDebug() << "Name" <<this->name << ", type" << this->type;
    }
};

class ConcreteObject : public Object{
public:
    ConcreteObject(const QString& name) : Object() {
        this->name = name;
        this->type = "concrete";
    }

};

#endif // OBJECTS_H
