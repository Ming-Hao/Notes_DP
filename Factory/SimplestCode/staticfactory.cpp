#include "staticfactory.h"

Product::Product(ProductType type, const QString& name)
{
    this->name = name;
    this->type = type;
    this->info = "";
}

QString Product::printInfo() const
{
    return this->info;
}

QString Product::getName() const
{
    return this->name;
}

ProductType Product::getType() const
{
    return this->type;
}

void Product::AppendInfo(const QString& txt)
{
    this->info.append(txt);
}

ProductFactory::ProductFactory()
{

}

Product *ProductFactory::getPruduct(ProductType type, const QString &name)
{
    Product* product = new Product(type, name);
    createStep1(product);
    createStep2(product);
    createStep3(product);
    createStep4(product);
    return product;
}

void ProductFactory::createStep1(Product* product)
{
    product->AppendInfo("This product name is " + product->getName() + ".\n");
}

void ProductFactory::createStep2(Product* product)
{
    product->AppendInfo("This is necessary step2.\n");
}

void ProductFactory::createStep3(Product* product)
{
    switch (product->getType()) {
    case ProductType::ProductTypeA:
        product->AppendInfo("This is typeA.\n");
        break;
    case ProductType::ProductTypeB:
        product->AppendInfo("This is typeB.\n");
        break;
    case ProductType::ProductTypeC:
        product->AppendInfo("This is typeC.\n");
        break;
    default:
        break;
    }
}

void ProductFactory::createStep4(Product *product)
{
    product->AppendInfo("This is necessary final step.\n");
}
