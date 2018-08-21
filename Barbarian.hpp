/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the header file for the Barbarian class. It inherits from 
** Creature and includes four Die objects as members. 
*********************************************************************/ 
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Creature.hpp"


class Barbarian : public Creature
{
private:
	Die attackDie1;
	Die attackDie2;
	Die defenseDie1;
	Die defenseDie2;
public:
	Barbarian();
	int attack();
	int defend();
	~Barbarian();
};

#endif