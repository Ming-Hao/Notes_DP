#ifndef KITCHEN_H
#define KITCHEN_H

#include <vector>
class IMenuItem;
class IVisitor;
class ChineseCookingStyle;
class AmericanCookingStyle;
class QString;


enum class Cook{
    Chinese,
    American
};

class Kitchen
{
public:
    Kitchen();
    ~Kitchen();
    void Order(IMenuItem* item);
    void Show(Cook type);

private:
    std::vector<IMenuItem*> menu;
    ChineseCookingStyle* TaiwaneseCook;
    AmericanCookingStyle* USCook;
};


#endif // KITCHEN_H
