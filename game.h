#ifndef GAME_H 
#define GAME_H

#include <iostream>

class Game {
protected:
    float winnings;
    float losses;
public:
    static int uses;
    Game();
    float getWinnings();
    float getLosses();
    int getUses();
    void addUses(){}
};
#endif