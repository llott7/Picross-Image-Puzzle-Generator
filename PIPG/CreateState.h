#pragma once

#ifndef CREATE_STATE
#define CREATE_STATE
#include "SFML/Graphics.hpp"
#include <iostream>
#include <cstdlib>
#include "State.h"


class CreateState:public State
{
public:
	CreateState(sf::RenderWindow &window);
	~CreateState();
	void draw(sf::RenderWindow &window);
	std::string action(sf::RenderWindow &window);

private:
	// names that end with -T: for texture and -S for Sprite

	//declaring the texture and the sprite for the background image in Create state
	sf::Texture createOptionT; 
	sf::Sprite createOptionS;

	// declaring the texture and the sprite for the title on top left $ the size input in Create state
	sf::Texture titleT; 
	sf::Sprite titleS;

	sf::Texture sizeInputT; 
	sf::Sprite sizeInputS;

	//declaring the textures and sprites for the options in Create state
	sf::Texture solveOptionT;
	sf::Sprite solveOptionS;
	sf::Texture backOptionT;
	sf::Sprite backOptionS;
	sf::Texture checkOptionT;
	sf::Sprite checkOptionS;
	sf::Texture exportOptionT;
	sf::Sprite exportOptionS;
};

#endif