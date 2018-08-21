/********************************************************************* 
** Program name: Project3
** Author: Kristen Harrison
** Date: 27 July 2017
** Description: CS 162, Project3. 
** This is the header file for input validation functions. The primary 
** functions useful to outside programs are getInt(), getString(), 
** getChar(), and getDouble, as well as displayMenu() which handles a 
** menu list and returns the user's integer choice. The other functions 
** are helper functions that can be used to check whether a string 
** represents an integer, double, char, or alphabetic string. 
*********************************************************************/
#ifndef VALIDATE_INPUT_HPP
#define VALIDATE_INPUT_HPP

#include <string>


int menuChoice();
std::string getString();
bool isString(std::string testString);
char validateChar(std::string letters);
char getChar();
double getDouble(double min, double max);
bool isDouble(std::string testString);
bool validDoubleRange(std::string testString, double min, double max);
int getInt(int min, int max);
bool isInteger(std::string testString);
bool validIntRange(std::string testString, int min, int max);


#endif