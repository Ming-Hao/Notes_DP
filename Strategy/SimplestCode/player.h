#ifndef PLAYER_H
#define PLAYER_H


class IAttackStyle;
class IDefenseStyle;

class Player
{
public:
    Player(IAttackStyle* attack, IDefenseStyle* defense);
    ~Player();
    void SetAttackSyle(IAttackStyle *style);
    void SetDefenseSyle(IDefenseStyle *style);
    void Attack();
    void Defense();
private:
    IAttackStyle* attack;
    IDefenseStyle* defense;
};

#endif // PLAYER_H
