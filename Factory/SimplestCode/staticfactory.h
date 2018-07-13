#ifndef STATICFACTORY_H
#define STATICFACTORY_H

#include <QString>
enum class ProductType
{
    ProductTypeA,
    ProductTypeB,
    ProductTypeC
};

class Product
{
public:
    Product(ProductType type, const QString &name);
    QString printInfo() const;
    QString getName() const;
    ProductType getType() const;
    void AppendInfo(const QString& txt);
private:
    ProductType type;
    QString name;
    QString info;
};

class ProductFactory
{
public:
    ProductFactory();
    static Product* getPruduct(ProductType type, const QString& name);
private:
    static void createStep1(Product* product);
    static void createStep2(Product* product);
    static void createStep3(Product* product);
    static void createStep4(Product* product);
};

#endif // STATICFACTORY_H
