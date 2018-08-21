/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the implementation file for the BlueMen class. BlueMen has 
** 2 attack Die and 3 defense Die, making them a formidable opponent.
*********************************************************************/ 
#include "BlueMen.hpp"



/*********************************************************************
** Description: The BlueMen constructor creates 2 attack die and 3 
** defense Die, and initializes the name, armor, and strength members
*********************************************************************/ 
BlueMen::BlueMen()
{
	attackDie1 = Die(10);
	attackDie2 = Die(10);

	defenseDie1 = Die(6);
	defenseDie2 = Die(6);
	defenseDie3 = Die(6);

	name = "Blue Men";
	armor = 3;
	strength = 12;
}




/*********************************************************************
** Description: The attack function rolls the dice and returns the total
*********************************************************************/ 
int BlueMen::attack()
{
	int attackPts = 0;

	attackPts += attackDie1.roll();
	attackPts += attackDie2.roll();

	return attackPts;
}





/*********************************************************************
** Description: The BlueMen roll either one, two, or three dice 
** depending on the object's current strength total.
*********************************************************************/ 
int BlueMen::defend()
{
	int defensePts = 0;

	if (strength > 0)
	{
		defensePts += defenseDie1.roll();
	}

	if (strength > 4)
	{
		defensePts += defenseDie2.roll();
	}

	if (strength > 8)
	{
		defensePts += defenseDie3.roll();
	}
	
	return defensePts;
}



/*********************************************************************
** Description: Empty virtual destructor
*********************************************************************/ 
BlueMen::~BlueMen()
{
	//
}