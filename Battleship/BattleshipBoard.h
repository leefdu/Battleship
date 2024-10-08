#pragma once

/*****************************************************************
 * \file   BattleshipBoard.h
 * \brief  Battleship game storage for player & computer ship placement & move outcomes (e.g. a miss)
 * <br>
 *
 * \author Lee
 * \date   October 2024
 *********************************************************************/

class BattleshipBoard
{
private:
	static const int GAME_BOARD_SIZE = 5; ///< define the grid size for the game, assumed to be a square e.g. 10x10

	//  Two shots grids
	//  myShotsGrid - 3 values - if player fires, was it a hit, a miss; or has player never fired at this location
	//  oppsShotGrid - 4- value - if warship on cell, did opp fire & hit it, or not fired on yet; if no warship - did opp fire & miss or not targeted yet
	//
	// ToDo - change values from chars to Enums
	// 
	char myShotsGrid[GAME_BOARD_SIZE][GAME_BOARD_SIZE];  ///< results of shots taken by player
	char oppsShotsGrid[GAME_BOARD_SIZE][GAME_BOARD_SIZE]; ///< results of shots against the player

public:
	/// @brief board constructor - creates two grids of GAME_BOARD_SIZE, one for shots taken, other for ship placement & shots taken to sink the ships
	BattleshipBoard();

	/// <returns>returns the size of the game grid</returns>
	int getGridSize();                     // grids are squares with each side = GAME_BOARD_SIZE, return length of a side

	/// <returns>character representing if shot fired by player and result (e.g. hit or miss)</returns>
	char getMyShotsGridValue(int, int);               // status of my previous shot

	/// <returns>character representing if shot fired at this player and result (e.g. hit or miss)</returns>
	char getOppsShotsGridValue(int row, int column);  // status of opp shot at this cell - e.g. Boat not hit, boat hit, miss, not fired on
};

