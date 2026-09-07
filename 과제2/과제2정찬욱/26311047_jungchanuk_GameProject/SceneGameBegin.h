#pragma once
#include "Dice.h"

class SceneGameBegin
{
public:
    int Init();
    int Update();
    int Render();
    int Destroy();

private:
    Dice m_dice;
    int m_floor = -1;
    int m_basket = -1;
    int m_scoreboard = -1;
};