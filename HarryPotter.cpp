/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the implementation file for the HarryPotter class. Deriving
** from Creature, the HarryPotter's signature move is that after dying
** once, it is restored to a strength of 20, but only once. 
*********************************************************************/ 
#include "HarryPotter.hpp"

#include <iostream>
using std::string;
using std::cout;
using std::endl;




/*********************************************************************
** Description: The HarryPotter constructor creates 2 attack die and 2 
** defense Die, and initializes the name, armor, strength and lives members
*********************************************************************/ 
HarryPotter::HarryPotter()
{
	attackDie1 = Die(6);
	attackDie2 = Die(6);
	
	defenseDie1 = Die(6);
	defenseDie2 = Die(6);

	name = "Harry Potter";
	armor = 0;
	strength = 10;
	lives = 2;
}



/*********************************************************************
** Description: The attack function rolls the dice and returns the total
*********************************************************************/ 
int HarryPotter::attack()
{
	int attackPts = 0;

	attackPts += attackDie1.roll();
	attackPts += attackDie2.roll();

	return attackPts;
}



/*********************************************************************
** Description: The defense function rolls the dice and returns the total
*********************************************************************/ 
int HarryPotter::defend()
{
	int defensePts = 0;

	defensePts += defenseDie1.roll();
	defensePts += defenseDie2.roll();

	return defensePts;
}



/*********************************************************************
** Description: The setStrength function allows an object's strength 
** to be set to a new int parameter. It also checks to see if lives are
** still equal to 2 and strength is zero or negative; if so, it restores
** strength to 20 and decrements lives, effectively giving 2 lives. 
*********************************************************************/ 
void HarryPotter::setStrength(int newStrength)
{
	strength = newStrength;

	if (lives == 2 && strength < 1)
	{
		lives--;
		strength = 20;
		cout << "Harry Potter resurrects!" << endl;
	}

}



/*********************************************************************
** Description: Empty virtual destructor
*********************************************************************/ 
HarryPotter::~HarryPotter()
{
	//
}