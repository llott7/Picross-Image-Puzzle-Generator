/*
	Author: Shaikha Al-Mashaykhi
	File: Menu.h
	Description: The header file for the Menu.cpp

	Changes log:
	|Description|			                      				   |Date|         |Performed By|
	added all the main code needed to be implemented in the Menu.cpp file		 10/20/2016    Shaikha Al-Mashaykhi
	added the action string						                 11/30/2016	Lance Lott
*/


#ifndef MENU_STATE
#define MENU_STATE
#pragma once
#include <cstdlib>
#include <iostream>
#include "SFML/Graphics.hpp"
#include "State.h"
#include <Windows.h>
#include <ShObjIdl.h>

class Menu: public State
{

public:
	Menu(sf::RenderWindow &window);
	~Menu();

	void draw(sf::RenderWindow &window);
	std::string action(sf::RenderWindow &window);

private:
	// names that end with -T: for texture and -S for Sprite

	//declaring the texture and the sprite for the background image in Main state
	sf::Texture MainStateT;
	sf::Sprite MainStateS;

	// declaring the texture and the sprite for the title in Main state
	sf::Texture titleT;
	sf::Sprite titleS;

	//declaring the textures and sprites for the main menu options in Main state
	sf::Texture scanOptionT;
	sf::Sprite scanOptionS;

	sf::Texture createOptionT;
	sf::Sprite createOptionS;

	sf::Texture importOptionT;
	sf::Sprite importOptionS;

	sf::Texture aboutOptionT;
	sf::Sprite aboutOptionS;

};

#endif
