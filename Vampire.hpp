/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the header file for the Vampire class. It inherits from the 
** Creature class and adds its own Die and attack and defend functions. 
*********************************************************************/ 
#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Creature.hpp"



class Vampire : public Creature
{
private:
	Die attackDie;
	Die defenseDie;
public:
	Vampire();
	int attack();
	int defend();
	~Vampire();
};

#endif