#include <iostream>
#include <stdlib.h>

#include "BattleshipBoard.h"
#include "BattleshipPlayer.h"
#include "BattleshipUI.h"
#include "Battleship.h"  // defines strings-text to be output to the console

using namespace std;

/*****************************************************************
 * \file   Battleship.cpp
 * \brief  main() program to play a computer hack of Battleship
 *
 * Version involves a human player and a computer player.
 * In its initial version, the computer player will randomly place its ships.
 * The human player will fire at the ships and hope to sink it(them) prior to running out of shells
 *
 *
 * \author Lee
 * \date   October 2024
 *********************************************************************/


int main()
{

    /// create two grids (e.g. boards) each for computer player & human player
    ///   For each player - one grid will represent the player's warships & shots by opponent
    ///       the second grid will represent the shots by the player (to hit the opponents warships)
    ///   For the first implementation - the player will be firing shots but has no ships &
    ///      the computer will have a ship, but will not be firing shots
    BattleshipBoard computerBoard;
    BattleshipBoard playerBoard;
    BattleshipUI console;

    console.displayMessage(introMessage);
    console.displayMessage(sprintOneMessage);

    console.displayMyShots(playerBoard);

}
