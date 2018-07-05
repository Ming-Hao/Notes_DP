#include "kitchen.h"
#include "imenuitem.h"
#include "chinesecookingstyle.h"
#include "americancookingstyle.h"

Kitchen::Kitchen()
{
    this->TaiwaneseCook = new ChineseCookingStyle();
    this->USCook = new AmericanCookingStyle();
}

Kitchen::~Kitchen()
{
    delete this->TaiwaneseCook;
    delete this->USCook;
}

void Kitchen::Order(IMenuItem *item)
{
    this->menu.push_back(item);
}


void Kitchen::Show(Cook type)
{
    switch (type) {
    case Cook::American:
        for(IMenuItem* item: this->menu)
            item->accept(this->USCook);

        break;
    case Cook::Chinese:
        for(IMenuItem* item: this->menu)
            item->accept(this->TaiwaneseCook);
        break;
    default:
        break;
    }

}
