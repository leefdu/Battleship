#include <stdlib.h>
#include <iostream>
#include "BattleshipUI.h"

BattleshipUI::BattleshipUI() {
	// empty constructor - nothing to do for now
}

// display methods will use the passed in player object to print out the appropriate board
void BattleshipUI::displayMyShots(BattleshipBoard playerGrid) {
	// To Do - to be implemented
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