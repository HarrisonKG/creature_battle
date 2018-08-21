/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the implementation file for the Medusa class. Medusa, if 
** rolling a total of 12 in attack(), activates Glare, which kills any 
** opponent other than HarryPotter (who comes back to life), or the 
** Vampire if it happened to roll a Charm defense. 
*********************************************************************/ 
#include "Medusa.hpp"




/*********************************************************************
** Description: The Medusa constructor creates 2 attack die and 1 
** defense Die, and initializes the name, armor, and strength members
*********************************************************************/ 
Medusa::Medusa()
{
	attackDie1 = Die(6);
	attackDie2 = Die(6);
	
	defenseDie = Die(6);

	name = "Medusa";
	armor = 3;
	strength = 8;
}



/*********************************************************************
** Description: The attack function rolls the dice and return the total. 
** If a 12 is rolled, 1000 is returned (Medusa's Glare).
*********************************************************************/ 
int Medusa::attack()
{
	int attackPts = 0;

	attackPts += attackDie1.roll();
	attackPts += attackDie2.roll();

	if (attackPts == 12)
	{
		attackPts = 1000; // glare
	}
		
	return attackPts;
}



/*********************************************************************
** Description: The defense function rolls the die and returns the total
*********************************************************************/ 
int Medusa::defend()
{
	int defensePts = 0;

	defensePts += defenseDie.roll();

	return defensePts;
}



/*********************************************************************
** Description: Empty virtual destructor
*********************************************************************/ 
Medusa::~Medusa()
{
	//
}