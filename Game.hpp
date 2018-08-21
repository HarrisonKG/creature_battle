/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. This is the header file for the Game 
** class, which handles the user interface and processing for the 
** Creature hierarchy. After receiving int input from the user, Game 
** creates and assigns a new object by passing a pointer reference
** and the int. The creatures fight each other in turn() using pointers.
*********************************************************************/ 
#ifndef GAME_HPP
#define GAME_HPP

#include "Creature.hpp"

class Game
{
private:
	Creature* creature1;
	Creature* creature2;
	Creature* winner;
public:
	Game();
	void playGame();
	void chooseCreatures();	
	int creatureMenu();
	void assignCreature(Creature* &cr_ptr, int creatureNum);
	void turn(Creature* attacker, Creature* defender);
	void printWinner();
	~Game();
};

#endif