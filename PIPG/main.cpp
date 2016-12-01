/*
	Author: Shaikha Al-Mashaykhi
	File: main.cpp
	Description: This file is the main file where it handles rendering the window and the event
				 for navigating between the states/viewa

	Changes log:
	|Description|                                                           |Date|         |Performed By|
	added all the main code needed to rednder a window and polling event  10/20/2016    Shaikha Al-Mashaykhi
	added the current_State to next_State			              11/30/2016	Lance Lott
*/


#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "Menu.h"
#include "ScanState.h"
#include "CreateState.h"
#include "SolveState.h"
#include "AboutState.h"


using namespace std;


void update_main_menu(sf::Event e) 
{
	//switch on event
	//if the user clicks scan
	//current_state = update_scan_screen
	//but you must declare all the functions in one file so they can be seen by 
	//each other. And you must declare the current_state global for the same
	//reason.

}


int main()
{
	//while( running ) {
	//	current_state();
	//}

	sf::RenderWindow window(sf::VideoMode(900, 900), "Picross Image Puzzle Generator", sf::Style::Close);
	current_state = "Main";

	State* runningState = new Menu(window);
	runningState->draw(window);

	window.setVerticalSyncEnabled(true);

	//window.clear();

	window.display();

	//opening and closing window event
	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		std::string nextState = current_state;
		while (window.pollEvent(event))
		{
			
			switch (event.type) 
			{
					case sf::Event::Closed:
						window.close();
						break;
					
					case sf::Event::MouseButtonReleased:
					{
						cout << "Click" << endl;
						if (event.mouseButton.button == sf::Mouse::Left) 
						{
							nextState=runningState->action(window);
							/*sf::Vector2i position = sf::Mouse::getPosition(window);
							if (position.x >= optionA.getPosition().x && position.x <= optionA.getPosition().x + optionA.getScale().x)
								if (position.y >= optionA.getPosition().y && position.y <= optionA.getPosition().y + optionA.getScale().y)
									cout << "click" << endl;*/
						}
					}
				
				default:
					break;	
			}
			if (nextState != current_state) {
				if (nextState == "Scan") {
					window.clear(sf::Color(255,0,0,255));
					State* newState = new ScanState(window);
					newState->draw(window);
					window.display();
					delete runningState;
					runningState = newState;
					current_state = nextState;
				}
				if (nextState == "Create") {
					window.clear(sf::Color(255, 0, 0, 255));
					State* newState = new CreateState(window);
					newState->draw(window);
					window.display();
					delete runningState;
					runningState = newState;
					current_state = nextState;
				}
				/*if (nextState == "About") {
					window.clear(sf::Color(255, 0, 0, 255));
					State* newState = new AboutState(window);
					newState->draw(window);
					window.display();
					delete runningState;
					runningState = newState;
					current_state = nextState;
				}*/

			}
		}

		

		

		//std::cout << sf::Mouse::getPosition(window).x << std::endl;
		//sf::Mouse::setPosition(sf::Vector2i(window.getSize().x /2, window.getSize().y/2), window);

		
	}
	cout << "end" << endl;

	return 0;
}
