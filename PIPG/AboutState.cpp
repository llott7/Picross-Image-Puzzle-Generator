/*
	Author: Shaikha Al-Mashaykhi
	File: AboutState.cpp
	Description: This file controls loading all the graphics for the
				 About State/view. Also, setting the right positions for
				 each sprite.

	Changes log:
	|Description|                                       |Date|         |Performed By|
	Loading the images, setting textures and Sprites  11/30/2016    Shaikha Al-Mashaykhi

*/
#include "AboutState.h"


using namespace std;


AboutState::AboutState(sf::RenderWindow &window):State(window)
{
	//load background image
	if (!aboutStateT.loadFromFile("resources/statesBackground.png"))
	{
		cout << "Error loading statesBackground.png" << endl;
	}

	//load blue square image
	if (!blueSquareT.loadFromFile("resources/blueSquare.png"))
	{
		cout << "Error loading blueSquare.png" << endl;
	}

	//load back option image
	if (!backOptionT.loadFromFile("resources/backSmall.png"))
	{
		cout << "Error loading backSmall.png" << endl;
	}

	// set texture for each sprite of the same name
	aboutStateS.setTexture(aboutStateT);
	blueSquareS.setTexture(blueSquareT);
	backOptionS.setTexture(backOptionT);

	blueSquareS.setPosition(window.getSize().x / 2.3, window.getSize().y / 1.8);
	backOptionS.setPosition(window.getSize().x / 10.5, window.getSize().y / 1.1);

}

//draw the sprites to display them
void AboutState::draw(sf::RenderWindow &window)
{
	window.draw(aboutStateS);
	window.draw(blueSquareS);
	window.draw(backOptionS);
}

std::string AboutState::action(sf::RenderWindow &window) {
	std::string nextState = current_state;
	return nextState;
}


AboutState::~AboutState()
{
}
