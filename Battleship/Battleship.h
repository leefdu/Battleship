#pragma once

#include <string>

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

/// @brief All user messages to be displayed are defined here

//  Game introduction including rules for full game
const string introMessage = R"(Battleship (also known as Battleships) is a strategy type guessing game for two players.
The game is played on ruled grids. Each player has a grid on which the player’s fleet of warships is marked. 
The locations of the fleets are concealed from the other player. 
Players alternate turns calling "shots" at the other player's ships.
The objective of the game is to destroy the opposing player's fleet.

Each player has a second grid mimicking their opponent’s grid to keep track of shots fired
 at the other player’s warships and whether those shots hit a ship or missed(landed harmlessly in the water).

The game is played on an 10x10 grid with battleship sizes ranging from two grid cells to six grid cells.

The cells are referenced by column letter(A - J) and row number(1 - 10).
Opponents take turns attacking by calling out a cell (e.g.B4 = 2nd column, 4th row)

The defender responds with “hit”(a warship occupies the cell) or “miss”.
If the attacker shoots all of the cells a warship occupies, the defender responds with "you sunk my battleship".

The defender’s primary grid will show their battleship as well as hits.
he attacker’s secondary grid will also keep track of the cells mentioned and the hits / misses 
  (for strategic purposes, as well as to avoid calling cells already mentioned).

The game is over when all of the warships belonging to either player are "sunk")";

// addendum to rules describing the initial game version
const string sprintOneMessage = R"(-------------
For this first version of FDU Battleships, 
  there will be a 5x5 grid (A1 to E5) and the computer will place a 3 cell battleship on its grid.

To win, the human player must sink the battleship in 10 turns or less.

Good hunting!

)";