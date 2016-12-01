/*
	Author: Shaikha Al-Mashaykhi
	File: ScanState.cpp
	Description: This file controls loading all the graphics for the 
				 Scan State/view. Also, setting the right positions for 
				 each sprite.

	Changes log:
	|Description|                                       |Date|         |Performed By|
	Loading the images, setting textures and Sprites  10/20/2016    Shaikha Al-Mashaykhi
	Added the draw function                           10/20/2016	Shaikha Al-Mashaykhis
	added the set positiong for each sprite		  11/30/2016	Shaikha Al-Mashaykhi
	added the scanState::action			  11/30/2016	Lance Lott
*/

#include "ScanState.h"

using namespace std;

ScanState::ScanState(sf::RenderWindow &window):State(window)
{
	//load background image
	if (!scanOptionT.loadFromFile("resources/statesBackground.png")) 
	{
		cout << "Error loading statesBackground.png" << endl;
	}

	//load title image
	if (!titleT.loadFromFile("resources/titleSmall.png"))
	{
		cout << "Error loading titleSmall.png" << endl;
	}

	//load solve option image
	if (!solveOptionT.loadFromFile("resources/solveSmall.png"))
	{
		cout << "Error loading solveSmall.png" << endl;
	}

	//load back option image
	if (!backOptionT.loadFromFile("resources/backSmall.png"))
	{
		cout << "Error loading backSmall.png" << endl;
	}

	//load open option image
	if (!openOptionT.loadFromFile("resources/openSmall.png"))
	{
		cout << "Error loading openSmall.png" << endl;
	}

	//load export option image
	if (!exportOptionT.loadFromFile("resources/exportSmall.png"))
	{
		cout << "Error loading exportSmall.png" << endl;
	}


	// set texture for each sprite of the same name
	scanOptionS.setTexture(scanOptionT);
	titleS.setTexture(titleT);

	solveOptionS.setTexture(solveOptionT);
	backOptionS.setTexture(backOptionT);
	openOptionS.setTexture(openOptionT);
	exportOptionS.setTexture(exportOptionT);

	//set the title in the top left of the window
	titleS.setPosition(5.f, 5.f);

	//set position of scan option image
	solveOptionS.setPosition(window.getSize().x / 10.5, window.getSize().y / 1.2);
	backOptionS.setPosition(window.getSize().x / 10.5, window.getSize().y / 1.1);
	openOptionS.setPosition(window.getSize().x / 1.3, window.getSize().y / 1.2);
	exportOptionS.setPosition(window.getSize().x / 1.3, window.getSize().y / 1.1);

}

//draw the sprites to display them
void ScanState::draw(sf::RenderWindow &window) 
{
	window.draw(scanOptionS);
	window.draw(titleS);

	window.draw(solveOptionS);
	window.draw(backOptionS);
	window.draw(openOptionS);
	window.draw(exportOptionS);

}

ScanState::~ScanState()
{
}

std::string ScanState::action(sf::RenderWindow &window) {
	std::string nextState = current_state;
	return nextState;
}
