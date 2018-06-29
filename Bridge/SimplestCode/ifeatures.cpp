#include "ifeatures.h"
#include "imethods.h"
IFeatures::IFeatures()
{
    this->implementmethod = nullptr;
}

void IFeatures::SetMethod(IMethods *srcmethod)
{
    if(this->implementmethod != nullptr)
        delete this->implementmethod;
    this->implementmethod = srcmethod;
}
