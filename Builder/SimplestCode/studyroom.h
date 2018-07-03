#ifndef STUDYROOM_H
#define STUDYROOM_H

#include "iroombuilder.h"
class StudyRoom : public IRoomBuilder
{
public:
    StudyRoom();
    void BuildWindows() override;
    void BuildDecoration() override;
    void BuildFurniture() override;
    void BuildElectricalAppliances() override;
};

#endif // STUDYROOM_H
