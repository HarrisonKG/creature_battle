/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the implementation file for the Barbarian class. It derives 
** from Creature, and its own functions are described below.
*********************************************************************/ 
#include "Barbarian.hpp"




/*********************************************************************
** Description: The Barbarian constructor creates 2 attack die and 2 
** defense Die, and initializes the name, armor, and strength members
*********************************************************************/ 
Barbarian::Barbarian()
{
	attackDie1 = Die(6);
	attackDie2 = Die(6);

	defenseDie1 = Die(6);
	defenseDie2 = Die(6);

	name = "Barbarian";
	armor = 0;
	strength = 12;
}



/*********************************************************************
** Description: The attack function rolls the dice and returns the total
*********************************************************************/ 
int Barbarian::attack()
{
	int attackPts = 0;

	attackPts += attackDie1.roll();
	attackPts += attackDie2.roll();

	return attackPts;
}



/*********************************************************************
** Description: The defense function rolls the dice and returns the total
*********************************************************************/ 
int Barbarian::defend()
{
	int defensePts = 0;

	defensePts += defenseDie1.roll();
	defensePts += defenseDie2.roll();

	return defensePts;
}



/*********************************************************************
** Description: Empty destructor
*********************************************************************/ 
Barbarian::~Barbarian()
{
	//
}