#pragma once

#include "BattleshipBoard.h"

#include <string>

using namespace std;  // not the best, but practical for this program

/*****************************************************************
 * \file   BattleshipUI.h
 * \brief  Battleship User Interface class
 * <br>
 * Stateless, solely responsible for all output to display device (initially text based console)
 *   as well as raw input from the user <br>
 * Excluded - any input validation <br>
 * Scope includes: <br>
 *   Displaying shots by player <br>
 *   Displaying shots by opponent against player <br>
 *   Displaying messages to the user (e.g. results, error messages) <br>
 *   Getting user input <br>
 *
 *
 * \author Lee
 * \date   October 2024
 *********************************************************************/

class BattleshipUI
{
public:
	/// @brief UI constructor - empty for now, no state information to initialize
	BattleshipUI();

	/// @brief display shots made by player (human or computer), uses the passed in player object to print the grid
	void displayMyShots(BattleshipBoard playerGrid);

	/// @brief display shots made by opponent (human or computer), uses the passed in player object to print the grid
	void displayOppsShots(BattleshipBoard playerGrid);

	/// @brief display the specified string on the console
	void displayMessage(string messageToBeDisplayed);

	/// @brief return the players input, will be validated and processed in another class
	string getPlayerInput();
};

