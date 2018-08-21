######################################################################
# Program name: Project3
# Author: Kristen Harrison
# Date: 3 August 2017
# Description: CS162, Project3. This makefile can be run with three commands:
# 1. "make" makes the program Project3   2. "make clean" cleans the directory   
# 3. "make memcheck" runs valgrind to test for memory leaks
######################################################################

# target: dependencies
# [tab] recipe


CXX = g++
CXXFLAGS = -std=c++0x -g -Wall
VALFLAGS = --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes

OBJS = main.o Game.o Die.o validateInput.o Creature.o Barbarian.o 
OBJS += BlueMen.o HarryPotter.o Vampire.o Medusa.o

HEADERS = Game.hpp Die.hpp validateInput.hpp Creature.hpp Barbarian.hpp 
HEADERS += BlueMen.hpp HarryPotter.hpp Vampire.hpp Medusa.hpp


Project3: $(OBJS) $(HEADERS)
	$(CXX) $(OBJS) -o Project3

main.o: $(HEADERS) main.cpp Game.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Game.o: Game.hpp Game.cpp Creature.hpp validateInput.hpp
	$(CXX) $(CXXFLAGS) -c Game.cpp

Die.o: Die.hpp Die.cpp
	$(CXX) $(CXXFLAGS) -c Die.cpp

Creature.o: Creature.hpp Creature.cpp 
	$(CXX) $(CXXFLAGS) -c Creature.cpp

Barbarian.o: Barbarian.hpp Barbarian.cpp Creature.hpp
	$(CXX) $(CXXFLAGS) -c Barbarian.cpp

BlueMen.o: BlueMen.hpp BlueMen.cpp  Creature.hpp
	$(CXX) $(CXXFLAGS) -c BlueMen.cpp

HarryPotter.o: HarryPotter.hpp HarryPotter.cpp  Creature.hpp
	$(CXX) $(CXXFLAGS) -c HarryPotter.cpp

Vampire.o: Vampire.hpp Vampire.cpp  Creature.hpp
	$(CXX) $(CXXFLAGS) -c Vampire.cpp

Medusa.o: Medusa.hpp Medusa.cpp  Creature.hpp
	$(CXX) $(CXXFLAGS) -c Medusa.cpp

validateInput.o: validateInput.hpp validateInput.cpp
	$(CXX) $(CXXFLAGS) -c  validateInput.cpp

clean:
	rm *.o Project3

memcheck: Project3
	valgrind $(VALFLAGS) ./Project3
