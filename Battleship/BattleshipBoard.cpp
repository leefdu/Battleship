#include "BattleshipBoard.h"

BattleshipBoard::BattleshipBoard() {
	for (int row = 0; row < GAME_BOARD_SIZE; row++) {
		for (int column = 0; column < GAME_BOARD_SIZE; column++) {
			myShotsGrid[row][column] = '.';
			oppsShotsGrid[row][column] = '.';
		}
	}
}

char BattleshipBoard::getMyShotsGridValue(int row, int column) {
	return myShotsGrid[row][column];
}

char BattleshipBoard::getOppsShotsGridValue(int row, int column) {
	return oppsShotsGrid[row][column];
}

int BattleshipBoard::getGridSize() {
	return GAME_BOARD_SIZE;
}

