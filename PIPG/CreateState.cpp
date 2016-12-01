#include "CreateState.h"

using namespace std;

CreateState::CreateState(sf::RenderWindow &window):State(window)
{
	//load background image
	if (!createOptionT.loadFromFile("resources/statesBackground.png"))
	{
		cout << "Error loading statesBackground.png" << endl;
	}

	//load title image
	if (!titleT.loadFromFile("resources/titleSmall.png"))
	{
		cout << "Error loading titleSmall.png" << endl;
	}

	//load size input image
	if (!sizeInputT.loadFromFile("resources/sizeInput.png"))
	{
		cout << "Error loading sizeInput.png" << endl;
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

	//load check option image
	if (!checkOptionT.loadFromFile("resources/checkSmall.png"))
	{
		cout << "Error loading checkSmall.png" << endl;
	}

	//load export option image
	if (!exportOptionT.loadFromFile("resources/exportSmall.png"))
	{
		cout << "Error loading exportSmall.png" << endl;
	}


	// set texture for each sprite of the same name
	createOptionS.setTexture(createOptionT);
	titleS.setTexture(titleT);
	sizeInputS.setTexture(sizeInputT);

	solveOptionS.setTexture(solveOptionT);
	backOptionS.setTexture(backOptionT);
	checkOptionS.setTexture(checkOptionT);
	exportOptionS.setTexture(exportOptionT);
}

//draw the sprites to display them
void CreateState::draw(sf::RenderWindow &window)
{
	window.draw(createOptionS);
	window.draw(titleS);
	window.draw(sizeInputS);

	window.draw(solveOptionS);
	window.draw(backOptionS);
	window.draw(checkOptionS);
	window.draw(exportOptionS);

}

CreateState::~CreateState()
{
}

std::string CreateState::action(sf::RenderWindow &window) {
	std::string nextState = current_state;
	return nextState;
}