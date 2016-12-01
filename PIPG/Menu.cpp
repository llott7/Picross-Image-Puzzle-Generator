/*
	Author: Shaikha Al-Mashaykhi
	File: Menu.cpp
	Description: This file controls loading all the graphics for the
				 main menu State/view. Also, setting the right positions for
				each sprite.
				Also, this file handles selecting the options on the main menu, switching
				and navigating betwee nthe states.

	Changes log:
	|Description|                                       |Date|         |Performed By|
	Loading the images, setting textures and Sprites  11/01/2016    Shaikha Al-Mashaykhi
	Added the draw function                           11/01/2016	Shaikha Al-Mashaykhis
	added the set positiong for each sprite		  11/30/2016	Shaikha Al-Mashaykhi
	added the scanState::action			  11/30/2016	Lance Lott
*/

#include "Menu.h"

using namespace std;

Menu::Menu(sf::RenderWindow &window):State(window)
{
	//load backgrounds
	if (!MainStateT.loadFromFile("resources/backG_cubes.png"))
	{
		std::cout << "Error" << std::endl;
	}

	//load title
	if (!titleT.loadFromFile("resources/title.png"))
	{
		std::cout << "Error" << std::endl;
	}

	//load the images for the Main Menu options
	if (!scanOptionT.loadFromFile("resources/scanOption.png"))
	{
		std::cout << "Error" << std::endl;
	}
	if (!createOptionT.loadFromFile("resources/createOption.png"))
	{
		std::cout << "Error" << std::endl;
	}
	if (!importOptionT.loadFromFile("resources/importOption.png"))
	{
		std::cout << "Error" << std::endl;
	}
	if (!aboutOptionT.loadFromFile("resources/aboutOption.png"))
	{
		std::cout << "Error" << std::endl;
	}


	MainStateS.setTexture(MainStateT);
	titleS.setTexture(titleT);

	scanOptionS.setTexture(scanOptionT);
	createOptionS.setTexture(createOptionT);
	importOptionS.setTexture(importOptionT);
	aboutOptionS.setTexture(aboutOptionT);

	
	//set the title in the middle of the window
	
	titleS.setPosition(204.f, 144.f);

	//set position of scan option image
	scanOptionS.setPosition(window.getSize().x / 2.3, window.getSize().y / 1.8);
	createOptionS.setPosition(window.getSize().x / 2.5, window.getSize().y / 1.57);
	importOptionS.setPosition(window.getSize().x / 2.5, window.getSize().y / 1.4);
	aboutOptionS.setPosition(window.getSize().x / 2.4, window.getSize().y / 1.26);
	

}


Menu::~Menu()
{
}

//draw the sprites to display them
void Menu::draw(sf::RenderWindow &window) 
{
	window.draw(MainStateS);
	window.draw(titleS);

	window.draw(scanOptionS);
	window.draw(createOptionS);
	window.draw(importOptionS);
	window.draw(aboutOptionS);

}

std::string Menu::action(sf::RenderWindow &window) {
	sf::Vector2i position = sf::Mouse::getPosition(window);
	std::string nextState = current_state;
	if (position.x >= scanOptionS.getGlobalBounds().left && position.x <= scanOptionS.getGlobalBounds().left + scanOptionS.getGlobalBounds().width)
		if (position.y >= scanOptionS.getGlobalBounds().top && position.y <= scanOptionS.getGlobalBounds().top + scanOptionS.getGlobalBounds().height)
		cout << "Scan";	
                    //nextState = "Scan";
	if (position.x >= createOptionS.getGlobalBounds().left && position.x <= createOptionS.getGlobalBounds().left + createOptionS.getGlobalBounds().width)
		if (position.y >= createOptionS.getGlobalBounds().top && position.y <= createOptionS.getGlobalBounds().top + createOptionS.getGlobalBounds().height)
                    cout << "Create";
                    //nextState = "Create";
	if(position.x>=importOptionS.getGlobalBounds().left && position.x<=importOptionS.getGlobalBounds().left+importOptionS.getGlobalBounds().width)
		if (position.y >= importOptionS.getGlobalBounds().top && position.y <= importOptionS.getGlobalBounds().top + importOptionS.getGlobalBounds().height) {
                    ifstream inFile;
                    inFile.open("testfile.picross");
                    string line;
                    getline(inFile,line);
                    istringstream parser(line);
                    int vertSize,horizSize;
                    parser >> horizSize >> vertSize;
                    Puzzle* testPuzzle=new Puzzle(horizSize,vertSize);
                    getline(inFile,line);
                    parser.str(line);
                    string clueLine;
                    for(int lineCount=0;getline(parser,clueLine,',');lineCount++){
                        istringstream clueParse(clueLine);
                        for(int count=0;!clueParse.eof();count++){
                            int value;
                            clueParse >> value;
                            testPuzzle->colClues[lineCount].clue[count]->size=value;
                        }
                    }
                    getline(inFile,line);
                    parser.str(line);
                    for(int lineCount=0;getline(parser,clueLine,',');lineCount++){
                        istringstream clueParse(clueLine);
                        for(int count=0;!clueParse.eof();count++){
                            int value;
                            clueParse >> value;
                            testPuzzle->rowClues[lineCount].clue[count]->size=value;
                        }
                    }
                    inFile.close();
                    Solver solver(testPuzzle);
                    solver.solveLogic();
                    for(int vertCount=0;vertCount<testPuzzle->vertSize;vertCount++){
                        for(int horizCount=0;horizCount<testPuzzle->horizSize;horizCount++)
                            cout << testPuzzle->grid[horizCount][vertCount];
                        cout << endl;
                    }
		}
        if(position.x>=aboutOptionS.getGlobalBounds().left && position.x<=aboutOptionS.getGlobalBounds().left+aboutOptionS.getGlobalBounds().width)
            if(position.y>=aboutOptionS.getGlobalBounds().top && position.y<=aboutOptionS.getGlobalBounds().top+aboutOptionS.getGlobalBounds().height)
                nextState="About";
			


	return nextState;
}
