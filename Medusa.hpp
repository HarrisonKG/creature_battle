/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the header file for the Medusa class, which inherits from the 
** Creature class. Medusa adds Die objects and defines attack and defend.
*********************************************************************/ 
#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Creature.hpp"


class Medusa : public Creature
{
private:
	Die attackDie1;
	Die attackDie2;
	Die defenseDie;
public:
	Medusa();
	int attack();
	int defend();
	~Medusa();
};

#endif