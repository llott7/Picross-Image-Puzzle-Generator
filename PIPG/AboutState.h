/*
	Author: Shaikha Al-Mashaykhi
	File: AboutState.h
	Description: The header file for the AboutState.cpp

	Changes log:
	|Description|									|Date|         |Performed By|
	added all the main code needed to be implemented in the CreateState.cpp file  10/20/2016    Shaikha Al-Mashaykhi
*/

#pragma once

#ifndef ABOUT_STATE
#define ABOUT_STATE
#include "SFML/Graphics.hpp"
#include <iostream>
#include <cstdlib>
#include "State.h"

class AboutState:public State
{
public:
	AboutState(sf::RenderWindow &window);
	~AboutState();
	void draw(sf::RenderWindow &window);
	std::string action(sf::RenderWindow &window);


private:
	sf::Texture aboutStateT;
	sf::Sprite aboutStateS;

	sf::Texture blueSquareT;
	sf::Sprite blueSquareS;

	sf::Texture backOptionT;
	sf::Sprite backOptionS;
};

#endif
