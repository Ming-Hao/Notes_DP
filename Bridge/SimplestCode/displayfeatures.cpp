#include "displayfeatures.h"
#include "imethods.h"

DisplayFeatures::DisplayFeatures(IMethods *srcmethod) : IFeatures()
{    
    this->implementmethod = srcmethod;
}

DisplayFeatures::~DisplayFeatures()
{
    delete this->implementmethod;
}
void DisplayFeatures::Read(const QString &path)
{
    this->implementmethod->RawRead(path);
}

void DisplayFeatures::Write()
{
    this->implementmethod->RawWrite();
}
