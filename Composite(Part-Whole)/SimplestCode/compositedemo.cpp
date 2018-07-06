#include "compositedemo.h"
#include "tvstation.h"
#include "tvshow.h"
CompositeDemo::CompositeDemo()
{

}

void CompositeDemo::ShowDemo()
{
    IElement* tvstation = new TVStation();
    IElement* sportschannel1 = new SportsChannel();
    IElement* sportschannel2 = new SportsChannel();
    IElement* sportschannel3 = new SportsChannel();
    IElement* newschannel = new NewsChannel();
    sportschannel1->AddItem(new MainShow());
    sportschannel1->AddItem(new MainShow());
    sportschannel1->AddItem(new Advertising());
    sportschannel2->AddItem(new MainShow());
    sportschannel2->AddItem(new Advertising());
    sportschannel2->AddItem(new MainShow());
    sportschannel2->AddItem(new MainShow());
    sportschannel3->AddItem(new MainShow());
    sportschannel3->AddItem(new Advertising());
    sportschannel3->AddItem(new MainShow());
    newschannel->AddItem(new MainShow());
    newschannel->AddItem(new MainShow());
    newschannel->AddItem(new Advertising());
    tvstation->AddItem(sportschannel1);
    tvstation->AddItem(sportschannel2);
    tvstation->AddItem(newschannel);
    tvstation->AddItem(sportschannel3);
    tvstation->Process();

    delete tvstation;

}
