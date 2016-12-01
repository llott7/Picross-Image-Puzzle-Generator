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

//void ScanState::update(float dt) { }


ScanState::~ScanState()
{
}

std::string ScanState::action(sf::RenderWindow &window) {
	std::string nextState = current_state;
	return nextState;
}