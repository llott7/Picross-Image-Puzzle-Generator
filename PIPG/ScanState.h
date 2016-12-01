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