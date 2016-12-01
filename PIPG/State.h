/*
	Author: Lance Lott
	File: State.cpp
	Description: 

	Changes log:
	|Description|                                       |Date|         |Performed By|
	
*/

#ifndef STATE
#define STATE
#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>

static std::string current_state="Main";

class State {
public:
	State(sf::RenderWindow &window);
	~State();
	virtual void draw(sf::RenderWindow &window)=0;
	virtual std::string action(sf::RenderWindow &window) = 0;
};
#endif
