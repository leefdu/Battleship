// Battleship.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Play battleship - initial version has a human player and a computer player
//   Computer player will random place ship(s)
//   Human player will fire at the ships and hope to sink it(them) prior to running out of shells

#include <iostream>
#include <stdlib.h>

#include "BattleshipBoard.h"
#include "BattleshipPlayer.h"
#include "BattleshipUI.h"
#include "Battleship.h"  // defines strings-text to be output to the console

using namespace std;



int main()
{

    std::cout << "Commence Firing!\n";

    // create two grids (e.g. boards) each for computer player & human player
    //   For each player - one grid will represent the player's warships & shots by opponent
    //       the second grid will represent the shots by the player (to hit the opponents warships)
    //   For the first implementation - the player will be firing shots but has no ships &
    //      the computer will have a ship, but will not be firing shots
    BattleshipBoard computerBoard;
    BattleshipBoard playerBoard;
    BattleshipUI console;

    console.displayMessage(introMessage);
    console.displayMessage(sprintOneMessage);

    std::cout << "cell 0 0 = " << playerBoard.getMyShotsGridValue(0, 0) << std::endl;  // replace this with call to UI to display full grid

}
