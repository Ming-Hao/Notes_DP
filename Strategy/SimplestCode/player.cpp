#include "player.h"
#include "iattackstyle.h"
#include "idefensestyle.h"
Player::Player(IAttackStyle *attack, IDefenseStyle *defense)
{
    this->attack = attack;
    this->defense = defense;
}

Player::~Player()
{
    if(this->attack != nullptr)
        delete this->attack;
    if(this->defense != nullptr)
        delete this->defense;

    this->attack = nullptr;
    this->defense = nullptr;
}

void Player::SetAttackSyle(IAttackStyle* style)
{
    if(this->attack != nullptr)
        delete this->attack;
    this->attack = style;
}

void Player::SetDefenseSyle(IDefenseStyle *style)
{
    if(this->defense != nullptr)
        delete this->defense;
    this->defense = style;
}

void Player::Attack()
{
    this->attack->Attack();
}

void Player::Defense()
{
    this->defense->Defense();
}
