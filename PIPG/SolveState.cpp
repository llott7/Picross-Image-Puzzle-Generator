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