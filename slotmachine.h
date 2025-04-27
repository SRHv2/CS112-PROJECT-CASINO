#ifndef SLOTMACHINE_H
#define SLOTMACHINE_H

#include "game.h"

class SlotMachine : protected Game {
private:
    char symbols[5] = {'7', '3', '1', '2', '5'};
    float play_cost = 20;
    bool win;
public:
    void Crank();
};

#endif