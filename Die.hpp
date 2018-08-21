/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project 3. 
** This is the class interface file for Die. It contains a roll function
** that returns a random number from 1 to the number of sides.  
*********************************************************************/
#ifndef DIE_HPP
#define DIE_HPP


class Die
{
private:
	int sides;
public:
	Die(int numSides);
	Die();
	int roll();
	~Die();
};

#endif