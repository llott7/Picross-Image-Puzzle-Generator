#include "State.h"

using namespace std;

State::State(sf::RenderWindow &window) {

}

State::~State() {

}

void State::draw(sf::RenderWindow &window) {

}

std::string State::action(sf::RenderWindow &window) {
	std::string nextState = current_state;
	return nextState;
}