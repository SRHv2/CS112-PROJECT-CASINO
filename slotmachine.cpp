#include "slotmachine.h"
#include <iostream>
#include <cstdlib>

SlotMachine::SlotMachine(){
    
    char wheel1 = symbols[rand() % 5];
    char wheel2 = symbols[rand() % 5];
    char wheel3 = symbols[rand() % 5];
    cout << wheel1 << "\t" << wheel2 << "\t" << wheel3;

    if (wheel1 == wheel2 && wheel2 == wheel3) {
        switch (wheel1) {
            case '7': winnings+= 7000;
            case '3': winnings+=3000;
            case '1': winnings+= 1000.0;
            case '2': winnings+=2000;
            case '5': winnings+= 5000;
        }    
    } 
    else 
        cout << "\nYou Lost, Better Luck Next Time";
    winnings-=20; //20 is the cost to play
}
float SlotMachine::getWinnings(){
    return SlotMachine::winnings;
}