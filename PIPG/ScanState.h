/*
	Author: Shaikha Al-Mashaykhi
	File: ScanState.h
	Description: The header file for the ScanState.cpp

	Changes log:
	|Description|			         				     |Date|         |Performed By|
	added all the main code needed to be implemented in the ScanState.cpp file  10/20/2016    Shaikha Al-Mashaykhi
	added the action string					                    11/30/2016	Lance Lott
*/

#ifndef SCAN_STATE
#define SCAN_STATE
#pragma once

#include "SFML/Graphics.hpp"
#include <iostream>
#include <cstdlib>
#include "State.h"

class ScanState:public State
{

public:
	ScanState(sf::RenderWindow &window);
	~ScanState();

	//dt, change in time 
	//void update(float dt);
	void draw(sf::RenderWindow &window);
	std::string action(sf::RenderWindow &window);


private:
	// names that end with -T: for texture and -S for Sprite

	//declaring the texture and the sprite for the background image in Scan state
	sf::Texture scanOptionT; 
	sf::Sprite scanOptionS;
	
	// declaring the texture and the sprite for the title on the top left in Scan state
	sf::Texture titleT; 
	sf::Sprite titleS;
	
	//declaring the textures and sprites for the options in Scan state
	sf::Texture solveOptionT; 
	sf::Sprite solveOptionS;

	sf::Texture backOptionT;
	sf::Sprite backOptionS;

	sf::Texture openOptionT;
	sf::Sprite openOptionS;

	sf::Texture exportOptionT;
	sf::Sprite exportOptionS;

};

#endif
