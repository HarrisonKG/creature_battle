/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the main file for the creature combat game. It instantiates 
** a new Game, then calls its playGame() function to begin interaction
** with the user to choose creatures and see them battle.
*********************************************************************/ 
#include "Game.hpp"


int main()
{
	Game game = Game();
	game.playGame();

	return 0;
}