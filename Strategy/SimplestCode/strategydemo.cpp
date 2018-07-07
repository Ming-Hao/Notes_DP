#include "strategydemo.h"
#include "player.h"
#include "positivedefense.h"
#include "positiveoffense.h"
#include "negativedefense.h"
#include "negativeoffense.h"
#include <QDebug>
StrategyDemo::StrategyDemo()
{

}

void StrategyDemo::ShowDemo()
{
    auto RepeatAction = [=] (Player* player){
        qDebug() << "---repeat action---";
        for(unsigned int i = 0; i < 5; i++)
        {
            player->Attack();
            player->Defense();
        }
    };

    Player* player = new Player(new PositiveOffense(), new PositiveDefense());
    RepeatAction(player);
    player->SetAttackSyle(new NegativeOffense());
    RepeatAction(player);
    player->SetDefenseSyle(new NegativeDefense());
    RepeatAction(player);
    delete player;
}
