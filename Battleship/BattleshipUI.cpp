#include <stdlib.h>
#include <iostream>
#include "BattleshipUI.h"

/*****************************************************************
 * \file   BattleshipUI.cpp
 * \brief  Battleship User Interface class (see BattleshipUI.h for details)
 * <br>
 *
 *
 * \author Lee
 * \date   October 2024
 *********************************************************************/

BattleshipUI::BattleshipUI() {
	// empty constructor - nothing to do for now
}

// display methods will use the passed in player object to print out the appropriate board
// display shots the player (e.g. human player) has launched
// ToDo - pretty up the board, add a title, row & column headers, maybe change placement on the screen

/**
 * Displays shots by player
 * @param player grid (player instance of BattleshipBoard class) used to access shots taken by player
 * 
 * @note assumes grid values returned by getMyShotsGridValue() are 'char' suitable for printing <br>
 * ToDo - change data from char to Enums, and map here in the UI
 */

void BattleshipUI::displayMyShots(BattleshipBoard playerGrid) {
	for (int row = 0; row < playerGrid.getGridSize(); row++) {
		for (int column = 0; column < playerGrid.getGridSize(); column++) {
			std::cout << playerGrid.getMyShotsGridValue(row, column) << " ";
		}
		std::cout << std::endl;

	}
	// for now - enter an additional new line, will need to revisit this later
	std::cout << std::endl;
}

/**
 * Displays shots by opponent
 * @param player grid (player instance of BattleshipBoard class) used to access shots taken by player
 *
 * ToDo - method not yet implemented
 */
void BattleshipUI::displayOppsShots(BattleshipBoard playerGrid) {
	// To Do - to be implemented
}

/**
 * Display message on the display (e.g. console)
 * @param string to be displayed on the console
 * 
 * @note - method currently adds a newline (std::enl) after displaying the message
 */
void BattleshipUI::displayMessage(string messageToBeDisplayed) {
	std::cout << messageToBeDisplayed << std::endl;
}

/**
 * @brief return raw input from console (ie from player)
 * 
 * @return raw string entered by player including all control characters (e.g. new line)
 * 
 * @note: input will be validated and processed by caller (ie in another class)
 * 
 * ToDo - method not yet implemented
 */
string BattleshipUI::getPlayerInput() {
	// To Do - to be implemented
	return "";
}