/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the implementation file for the Creature class. Its 
** accessor and mutator functions are defined and described below.
*********************************************************************/ 
#include "Creature.hpp"
using std::string;


/*********************************************************************
** Description: Empty constructor
*********************************************************************/ 
Creature::Creature()
{
	//
}



/*********************************************************************
** Description: Virtual accessor function for name member
*********************************************************************/ 
string Creature::getName()
{
	return name;
}



/*********************************************************************
** Description: Virtual mutator function for name member
*********************************************************************/ 
void Creature::setName(string newName)
{
	name = newName;
}



/*********************************************************************
** Description: Virtual accessor function for armor
*********************************************************************/ 
int Creature::getArmor()
{
	return armor;
}



/*********************************************************************
** Description: Virtual accessor function for strength
*********************************************************************/ 
int Creature::getStrength()
{
	return strength;
}
	


/*********************************************************************
** Description: Virtual mutator function for strength
*********************************************************************/ 
void Creature::setStrength(int newStrength)
{
	strength = newStrength;
}



/*********************************************************************
** Description: Empty virtual destructor
*********************************************************************/ 
Creature::~Creature()
{
	//
}