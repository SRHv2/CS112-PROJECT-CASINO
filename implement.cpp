#include <iostream>
#include <cstdlib>
#include "slotmachine.h"
using namespace std;
// input | g++ implement.cpp game.cpp slotmachine.cpp -o casino | in terminal
//followed by ./casino to run the program

int main(){
    srand(time(0));
    SlotMachine S1;
    S1.Crank();
}
