#include <stdlib.h>
#include <iostream>
#include "BattleshipUI.h"

BattleshipUI::BattleshipUI() {
	// empty constructor - nothing to do for now
}

// display methods will use the passed in player object to print out the appropriate board
// display shots the player (e.g. human player) has launched
// ToDo - pretty up the board, add a title, row & column headers, maybe change placement on the screen

void BattleshipUI::displayMyShots(BattleshipBoard playerGrid) {
	for (int row = 0; row < BattleshipBoard::GAME_BOARD_SIZE; row++) {
		for (int column = 0; column < BattleshipBoard::GAME_BOARD_SIZE; column++) {
			std::cout << playerGrid.getMyShotsGridValue(row, column) << " ";
		}
		std::cout << std::endl;

	}
	// for now - enter an additional new line, will need to revisit this later
	std::cout << std::endl;
}
void BattleshipUI::displayOppsShots(BattleshipBoard playerGrid) {
	// To Do - to be implemented
}

// displaying a message on the console currently assumes all relevant info is passed in
void BattleshipUI::displayMessage(string messageToBeDisplayed) {
	std::cout << messageToBeDisplayed << std::endl;
}

// return the players input, will be validated and processed in another class
string BattleshipUI::getPlayerInput() {
	// To Do - to be implemented
	return "";
}