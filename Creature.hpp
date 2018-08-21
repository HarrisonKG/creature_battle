/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the interface file for the Creature class. It is an abstract
** base class and cannot be instantiated. Its attack and defend functions
** are purely virtual and are defined in child classes. 
*********************************************************************/ 
#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>
#include "Die.hpp"


class Creature
{
protected:
	std::string name;
	int armor;
	int strength;
public:
	Creature();
	virtual int attack() = 0;
	virtual int defend() = 0;
	virtual std::string getName();
	virtual void setName(std::string newName);
	virtual int getArmor();
	virtual int getStrength();
	virtual void setStrength(int newStrength);
	virtual ~Creature(); 
};

#endif