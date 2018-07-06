#ifndef TVSHOW_H
#define TVSHOW_H

#include "ielement.h"
class SportsChannel : public IElement
{
public:
    SportsChannel();
    ~SportsChannel();
    void Process() override;

};

class NewsChannel : public IElement
{
public:
    NewsChannel();
    ~NewsChannel();
    void Process() override;
};

class MainShow : public IElement
{
public:
    MainShow();
    void Process() override;
private:
    void AddItem(IElement* item) override {}

};

class Advertising : public IElement
{
public:
    Advertising();
    void Process() override;
private:
    void AddItem(IElement* item) override {}

};

#endif // TVSHOW_H
