/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the implementation file for the Vampire class, which inherits
** from the Creature class. Vampire has a 50% chance of making a impervious 
** defense classed Charm. Individual function descriptions are below. 
*********************************************************************/ 
#include "Vampire.hpp"




/*********************************************************************
** Description: The Vampire constructor creates 1 attack die and 1 
** defense Die, and initializes the name, armor, and strength members
*********************************************************************/ 
Vampire::Vampire()
{
	attackDie = Die(12);
	defenseDie = Die(6);

	name = "Vampire";
	armor = 1;
	strength = 18;
}



/*********************************************************************
** Description: The attack function rolls the die and returns the total
*********************************************************************/ 
int Vampire::attack()
{
	int attackPts = 0;

	attackPts += attackDie.roll();

	return attackPts;
}



/*********************************************************************
** Description: The defense function rolls the die and returns the 
** total. If the die roll is even (50% chance), it returns 2000 (Charm). 
*********************************************************************/ 
int Vampire::defend()
{
	int defensePts = 0;
	int defenseRoll = defenseDie.roll();
	defensePts += defenseRoll;

	if (defenseRoll % 2 == 0)
	{
		defensePts = 2000;
	}

	return defensePts;
}



/*********************************************************************
** Description: Empty virtual destructor
*********************************************************************/ 
Vampire::~Vampire()
{
	//
}