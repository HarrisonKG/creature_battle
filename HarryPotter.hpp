/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the header file for the HarryPotter class, which derives 
** from the Creature class. Its add its own Die objects, overrides
** setStrength, and defines attack and defend. 
*********************************************************************/ 
#ifndef HARRY_POTTER_HPP
#define HARRY_POTTER_HPP

#include "Creature.hpp"


class HarryPotter : public Creature
{
private:
	Die attackDie1;
	Die attackDie2;
	Die defenseDie1;
	Die defenseDie2;
	int lives;
public:
	HarryPotter();
	int attack();
	int defend();
	void setStrength(int newStrength);
	~HarryPotter();
};

#endif