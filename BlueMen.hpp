/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the header file for the BlueMen class. It inherits from the 
** Creature class, adds its own Die members and defines attack and defend.
*********************************************************************/ 
#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "Creature.hpp"


class BlueMen : public Creature
{
private:
	Die attackDie1;
	Die attackDie2;
	Die defenseDie1;
	Die defenseDie2;
	Die defenseDie3;
public:
	BlueMen();
	int attack();
	int defend();
	~BlueMen();
};

#endif