#pragma once

#include "BattleshipBoard.h"

#include <string>

using namespace std;  // not the best, but practical for this program

class BattleshipUI
{
public:
	BattleshipUI();

	// display methods will use the passed in player object to print out the appropriate board
	void displayMyShots(BattleshipBoard playerGrid);
	void displayOppsShots(BattleshipBoard playerGrid);

	// displaying a message on the console currently assumes all relevant info is passed in
	void displayMessage(string messageToBeDisplayed);

	// return the players input, will be validated and processed in another class
	string getPlayerInput();
};

