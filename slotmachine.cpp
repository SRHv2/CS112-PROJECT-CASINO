#include "slotmachine.h"
#include <iostream>
#include <cstdlib>

void SlotMachine::Crank() {
    char wheel1 = symbols[rand() % 5];
    char wheel2 = symbols[rand() % 5];
    char wheel3 = symbols[rand() % 5];
    std::cout << wheel1 << "\t" << wheel2 << "\t" << wheel3;

    if (wheel1 == wheel2 && wheel2 == wheel3) {
        win = true;
        if (wheel1 == '7') {
            winnings += 7000;
            std::cout << "\nYou won 7000!";
        }
        // ... (other winning conditions)
    } else {
        std::cout << "\nYou lost, Better Luck Next Time";
    }
    losses -= play_cost;
}