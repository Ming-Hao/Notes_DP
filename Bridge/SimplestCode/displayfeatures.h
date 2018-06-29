#ifndef DISPLAYFEATURES_H
#define DISPLAYFEATURES_H

#include "ifeatures.h"
class IMethods;
class DisplayFeatures final: public IFeatures
{
public:
    DisplayFeatures(IMethods* srcmethod);
    ~DisplayFeatures();
    void Read(const QString& path) override;
    void Write() override;
};

#endif // DISPLAYFEATURES_H
