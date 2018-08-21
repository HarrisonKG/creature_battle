/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 3 August 2017
** Description: CS 162, Project3. 
** This is the implementation file for the Game class. It includes 
** all header files from the Creature derived classes and is responsible 
** for creating and assigning the creatures, then handling game flow 
** and menus to make it interactive. Individual descriptions below.
*********************************************************************/ 
#include "Game.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "Vampire.hpp"
#include "Medusa.hpp"
#include "validateInput.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;
using std::string;



/*********************************************************************
** Description: The Game constructor sets all pointers to null and 
** seeds srand
*********************************************************************/ 
Game::Game()
{
	creature1 = nullptr;
	creature2 = nullptr;
	winner = nullptr;

	srand(time(0));
}



/*********************************************************************
** Description: The playGame function manages all game play in the 
** Game object. It displays a looping menu that repeats until the user
** decides to quit. For each game, the user picks creatures which are
** created and assigned to pointers, then pitted against each other
** in battle. THe objects are deleted at the end of each game. 
*********************************************************************/ 
void Game::playGame()
{
	int gameOption = menuChoice();

	while (gameOption != 2)
	{
		chooseCreatures();

		Creature* attacker = creature1;
		Creature* defender = creature2;

		//switch starting position half the time
		int random = rand();
		if (random % 2 == 0)
		{
			attacker = creature2;
			defender = creature1;		
		}


		int rounds = 1;

		while (!winner)
		{
			cout << "\n\n\nRound " << rounds << ": " << endl;
			turn(attacker, defender);
			// check for winner in case of immediate kill
			if (!winner)
			{ 
				turn(defender, attacker);
			}
			rounds++;
		}

		printWinner();
		
		delete creature1;
		delete creature2;
		creature1 = nullptr;
		creature2 = nullptr;
		winner = nullptr;

		gameOption = menuChoice();
	}
}



/*********************************************************************
** Description: The turn function is called repeatedly until a winner 
** emerges. This function receives the int return values from attack 
** and defend and it handles strength processing and console messages. 
*********************************************************************/ 
void Game::turn(Creature* attacker, Creature* defender)
{
	// initial strength print outs 
	cout << attacker->getName() << " attacker: " << attacker->getStrength() << endl;
	cout << defender->getName() << " defender: " << defender->getStrength() << endl << endl;

	// get attack and defend values
	int attackPts = attacker->attack();
	int defensePts = defender->defend();


	if (defensePts == 2000) // charm
	{
		cout << "The " << defender->getName() << " charmed the " << attacker->getName()
			 << " into not attacking." << endl << endl;
	}
	else 
	{
		if (attackPts == 1000) // glare
		{
			cout << "The " << attacker->getName() << " used glare! The " << defender->getName() 
				 << " turned to stone!" << endl;
			defender->setStrength(0);
		}
		else // normal round, no charm or glare
		{
			cout << attacker->getName() << " attacked with " << attackPts << endl;
			cout << defender->getName() << " defended with " << defensePts << endl;
			
			int damage = attackPts - defensePts;
			cout << damage << " damage inflicted against " << defender->getArmor() 
				 << " armor" << endl;
			
			int loss = damage - defender->getArmor();
			
			if (loss > 0)
			{
				defender->setStrength(defender->getStrength() - loss);
				cout << defender->getName() << " is now at " << defender->getStrength() 
				 << " strength" << endl << endl;;
			}
			else 
			{
				cout << "No loss of strength" << endl << endl;
			}
			
		}
	}

	if(defender->getStrength() < 1)
	{
		winner = attacker;
	}
}



/*********************************************************************
** Description: The chooseCreatures function calls creatureMenu(), and 
** assignCreature() to assign the creature pointers to the user's choice
*********************************************************************/ 
void Game::chooseCreatures()
{
	int firstCr = creatureMenu();
	assignCreature(creature1, firstCr);

	int secondCr = creatureMenu();
	assignCreature(creature2, secondCr);

	if (creature1->getName() == creature2->getName())
	{
		string oldName = creature2->getName();
		creature2->setName(oldName + "_2");
	}
	
}



/*********************************************************************
** Description: The creatureMenu prints out the creature options and 
** receives user feedback as an int.
*********************************************************************/ 
int Game::creatureMenu()
{
	cout << "\nEnter the number of your character selection:\n"
		 << "1. Vampire\n"
		 << "2. Barbarian\n"
		 << "3. Blue Men\n"
		 << "4. Medusa\n"
		 << "5. Harry Potter" << endl;
	
	int menuItem = getInt(1, 5);
	return menuItem;
}



/*********************************************************************
** Description: THe assignCreature function receives a pointer passed
** by reference and the int of the user's creature choice. It uses a 
** switch statement to assign the pointer to the correct new creature. 
*********************************************************************/ 
void Game::assignCreature(Creature* &cr_ptr, int creatureNum)
{
	switch(creatureNum)
	{
		case 1: cr_ptr = new Vampire();
				break;
		case 2: cr_ptr = new Barbarian();
				break;
		case 3: cr_ptr = new BlueMen();
				break;
		case 4: cr_ptr = new Medusa();
				break;
		case 5: cr_ptr = new HarryPotter();
				break;
	}
}



/*********************************************************************
** Description: The printWinner function prints out the final strength
** points and the overall game winner
*********************************************************************/ 
void Game::printWinner()
{	
	cout << endl << endl;
	cout << creature1->getName() << ": " << creature1->getStrength() << endl;
	cout << creature2->getName() << ": " << creature2->getStrength() << endl;
	cout << winner->getName() << " won!" << endl << endl << endl << endl;
}



/*********************************************************************
** Description: Empty destructor
*********************************************************************/ 
Game::~Game()
{
	//
}