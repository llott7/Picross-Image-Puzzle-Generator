/*
	Author: Shaikha Al-Mashaykhi
	File: SolveState.h
	Description: The header file for the SolveState.cpp

	Changes log:
	|Description|							 	       |Date|         |Performed By|
	added all the main code needed to be implemented in the SolveState.cpp file  10/20/2016    Shaikha Al-Mashaykhi
	added the action string		       		                             11/30/2016    Lance Lott
*/

#ifndef SOLVE_STATE
#define SOLVE_STATE
#pragma once

#include "SFML/Graphics.hpp"
#include <iostream>
#include <cstdlib>
#include "State.h"

class SolveState:public State
{
public:
	SolveState(sf::RenderWindow &window);
	~SolveState();
	void draw(sf::RenderWindow &window);
	std::string action(sf::RenderWindow &window);

private:
	// names that end with -T: for texture and -S for Sprite

	//declaring the texture and the sprite for the background image in Solver state
	sf::Texture solveOptionT; 
	sf::Sprite solveOptionS;

	// declaring the texture and the sprite for the title on top left in Solver state
	sf::Texture titleT; 
	sf::Sprite titleS;

	//declaring the textures and sprites for the options in Solver state
	sf::Texture solveItForMeOptionT;
	sf::Sprite solveItForMeOptionS;
	sf::Texture backOptionT;
	sf::Sprite backOptionS;
	sf::Texture giveMeHintOptionT;
	sf::Sprite giveMeHintOptionS;

};

#endif
