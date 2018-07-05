#include "visitordemo.h"
#include "americancookingstyle.h"
#include "chinesecookingstyle.h"
#include "meat.h"
#include "soup.h"
#include "kitchen.h"

VisitorDemo::VisitorDemo()
{

}

void VisitorDemo::ShowDemo()
{
    Kitchen* kitchen = new Kitchen();
    Meat* meat = new Meat();
    Soup* soup = new Soup();
    kitchen->Order(meat);
    kitchen->Order(soup);

    kitchen->Show(Cook::American);
    kitchen->Show(Cook::Chinese);

    delete meat;
    delete soup;
    delete kitchen;

}
