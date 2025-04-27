#ifndef SLOT_MACHINE_H
#define SLOT_MACHINE_H

#include "Game.h"

class SlotMachine : public Game {
private:
    float winnings=0;
    char symbols[5] = {'7', '3', '1', '2', '5'};

public:
    SlotMachine(); 
    float getWinnings();
    
};

#endif  