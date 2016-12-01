/*
	Author: Shaikha Al-Mashaykhi
	File: SolveState.cpp
	Description: This file controls loading all the graphics for the
				Solve State/view. Also, sitting the right positions for
				each sprite.

	Changes log:
	|Description|                                       |Date|         |Performed By|
	Loading the images, setting textures and Sprites  11/01/2016    Shaikha Al-Mashaykhi
	Added the draw function                           11/01/2016	Shaikha Al-Mashaykhis
	added the set positiong for each sprite		  11/30/2016	Shaikha Al-Mashaykhi
	added the scanState::action			  11/30/2016	Lance Lott
*/

#include "SolveState.h"

using namespace std;

SolveState::SolveState(sf::RenderWindow &window):State(window)
{

	//load background image
	if (!solveOptionT.loadFromFile("resources/statesBackground.png"))
	{
		cout << "Error loading statesBackground.png" << endl;
	}

	//load title image
	if (!titleT.loadFromFile("resources/titleSmall.png"))
	{
		cout << "Error loading titleSmall.png" << endl;
	}

	//load solve it for me option image
	if (!solveItForMeOptionT.loadFromFile("resources/solveItForMe.png"))
	{
		cout << "Error loading solveItForMe.png" << endl;
	}

	//load back option image
	if (!backOptionT.loadFromFile("resources/backSmall.png"))
	{
		cout << "Error loading backSmall.png" << endl;
	}

	//load give me a hint option image
	if (!giveMeHintOptionT.loadFromFile("resources/giveMeHint.png"))
	{
		cout << "Error loading giveMeHint.png" << endl;
	}


	solveOptionS.setTexture(solveOptionT);
	titleS.setTexture(titleT);
	solveItForMeOptionS.setTexture(solveItForMeOptionT);
	backOptionS.setTexture(backOptionT);
	
	//set the title in the top left of the window
	titleS.setPosition(5.f, 5.f);

	//set position of scan option image
	solveItForMeOptionS.setPosition(window.getSize().x / 10.5, window.getSize().y / 1.2);
	backOptionS.setPosition(window.getSize().x / 10.5, window.getSize().y / 1.1);
	giveMeHintOptionS.setPosition(window.getSize().x / 1.3, window.getSize().y / 1.2);

}

//draw the sprites to display them
void SolveState::draw(sf::RenderWindow &window)
{
	window.draw(solveOptionS);
	window.draw(titleS);

	window.draw(solveItForMeOptionS);
	window.draw(backOptionS);
	window.draw(giveMeHintOptionS);

}


SolveState::~SolveState()
{
}

std::string SolveState::action(sf::RenderWindow &window) {
	std::string nextState = current_state;
	return nextState;
}
