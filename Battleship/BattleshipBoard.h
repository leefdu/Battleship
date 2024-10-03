#pragma once
class BattleshipBoard
{

public:
	static const int GAME_BOARD_SIZE = 5; 
	
	BattleshipBoard();
	int getGridSize();                     // grids are squares with each side = GAME_BOARD_SIZE, return length of a side
	char getMyShotsGridValue(int, int);               // status of my previous shot
	char getOppsShotsGridValue(int row, int column);  // status of opp shot at this cell - e.g. Boat not hit, boat hit, miss, not fired on

private:
	//  Two shots grids
	//  myShotsGrid - 3 values - if player fires, was it a hit, a miss; or has player never fired at this location
	//  oppsShotGrid - 4- value - if warship on cell, did opp fire & hit it, or not fired on yet; if no warship - did opp fire & miss or not targeted yet
	//
	// ToDo - change values from chars to Enums
	// 
	char myShotsGrid[GAME_BOARD_SIZE][GAME_BOARD_SIZE];
	char oppsShotsGrid[GAME_BOARD_SIZE][GAME_BOARD_SIZE];

};

