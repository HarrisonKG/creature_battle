/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the class implementation file for Die. It requires access to 
** the cstdlib library in order to use rand(). 
*********************************************************************/
#include "Die.hpp"
#include <cstdlib>




/*********************************************************************
** Description: The constructor has one int parameter that contains the 
** number of sides on the Die.
*********************************************************************/
Die::Die(int numSides)
{
	sides = numSides;
}



/*********************************************************************
** Description: Default constructor
*********************************************************************/
Die::Die()
{
	sides = 0;
}



/*********************************************************************
** Description: The roll function returns a random int between one and
** the number of sides
*********************************************************************/
int Die::roll()
{
	int dieRoll = rand() % sides + 1;
	return dieRoll;
}



/*********************************************************************
** Description: Empty destructor
*********************************************************************/
Die::~Die()
{
	//
}