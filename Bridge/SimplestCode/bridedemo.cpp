#include "bridedemo.h"
#include "concretemethod.h"
#include "displayfeatures.h"
#include "specialmethod.h"
#include "imethods.h"
BrideDemo::BrideDemo()
{

}

void BrideDemo::ShowDemo()
{

    IFeatures* ft = new DisplayFeatures(new SpecialMethod());
    ft->Read("cat.mea");
    ft->Write();

    IFeatures* ft2 = new DisplayFeatures(new ConcreteMethod());
    ft2->Read("cat.jpg");
    ft2->Write();

    delete ft2;
    delete ft;

}
