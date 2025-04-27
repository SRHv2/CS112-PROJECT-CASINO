#include "game.h"
int Game::uses = 0;

Game::Game() {
    winnings = 0;
    losses = 0;
}

float Game::getWinnings() {
    return winnings;
}

float Game::getLosses() {
    return losses;
}

int Game::getUses() {
    return uses;
}
void addUses(){
    ++Game::uses;
}
