#include "BattleshipBoard.h"

/*****************************************************************
 * \file   BattleshipBoard.cpp
 * \brief  Battleship move capture (see BattleshipBoard.h for details)
 * <br>
 *
 * \author Lee
 * \date   October 2024
 *********************************************************************/

/// <summary>
/// Constructor to initialize a battleship board object. <br>
/// Two grids - shots "I" took and shots opponent took <br>
///    both grids initialized to no shots taken ('.') <br>
/// To Do - design enums for the different status types (e.g. a miss) and change stored data to enums
/// </summary>
BattleshipBoard::BattleshipBoard() {
	for (int row = 0; row < GAME_BOARD_SIZE; row++) {
		for (int column = 0; column < GAME_BOARD_SIZE; column++) {
			myShotsGrid[row][column] = '.';
			oppsShotsGrid[row][column] = '.';
		}
	}
}
/// <summary>
/// Returns shot status (e.g. no shot taken) for a given row/column cell
/// </summary>
/// <param name="row"></param>
/// <param name="column"></param>
/// <returns> status as a printable character.  ToDo - describe values</returns>
char BattleshipBoard::getMyShotsGridValue(int row, int column) {
	return myShotsGrid[row][column];
}

char BattleshipBoard::getOppsShotsGridValue(int row, int column) {
	return oppsShotsGrid[row][column];
}

int BattleshipBoard::getGridSize() {
	return GAME_BOARD_SIZE;
}

