#include "Menu.h"
#include <iostream>

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
			nextState = "Scan";
		else;
	else if (position.x >= createOptionS.getGlobalBounds().left && position.x <= createOptionS.getGlobalBounds().left + createOptionS.getGlobalBounds().width)
		if (position.y >= createOptionS.getGlobalBounds().top && position.y <= createOptionS.getGlobalBounds().top + createOptionS.getGlobalBounds().height)
			nextState = "Create";
		else;
	else if(position.x>=importOptionS.getGlobalBounds().left && position.x<=importOptionS.getGlobalBounds().left+importOptionS.getGlobalBounds().width)
		if (position.y >= importOptionS.getGlobalBounds().top && position.y <= importOptionS.getGlobalBounds().top + importOptionS.getGlobalBounds().height) {
                    cout << "Import" << endl;
		}
			//OPENFILENAME ofn;
			
			/*ZeroMemory(&filename, sizeof(filename));
			ZeroMemory(&ofn, sizeof(ofn));
			ofn.lStructSize = sizeof(ofn);
			ofn.hwndOwner = NULL;  // If you have a window to center over, put its HANDLE here
			ofn.lpstrFilter = "Text Files\0*.txt\0Any File\0*.*\0";
			ofn.lpstrFile = filename;
			ofn.nMaxFile = MAX_PATH;
			ofn.lpstrTitle = "Please select a file.";
			ofn.Flags = OFN_DONTADDTORECENT | OFN_FILEMUSTEXIST;

			if (GetOpenFileNameA(&ofn))
			{
				std::cout << "You chose the file \"" << filename << "\"\n";
			}*/
			// CoCreate the File Open Dialog object.
			/*
			IFileDialog *pfd = NULL;
			HRESULT hr = CoCreateInstance(CLSID_FileOpenDialog,
				NULL,
				CLSCTX_INPROC_SERVER,
				IID_PPV_ARGS(&pfd));
			if (SUCCEEDED(hr))
			{
				
				// Create an event handling object, and hook it up to the dialog.
				IFileDialogEvents *pfde = NULL;
				
				//hr = CDialogEventHandler_CreateInstance(IID_PPV_ARGS(&pfde));
				if (SUCCEEDED(hr))
				{
					// Hook up the event handler.
					DWORD dwCookie;
					hr = pfd->Advise(pfde, &dwCookie);
					if (SUCCEEDED(hr))
					{
						// Set the options on the dialog.
						DWORD dwFlags;

						// Before setting, always get the options first in order 
						// not to override existing options.
						hr = pfd->GetOptions(&dwFlags);
						if (SUCCEEDED(hr))
						{
							// In this case, get shell items only for file system items.
							hr = pfd->SetOptions(dwFlags | FOS_FORCEFILESYSTEM);
							if (SUCCEEDED(hr))
							{
								// Set the file types to display only. 
								// Notice that this is a 1-based array.
								//hr = pfd->SetFileTypes(ARRAYSIZE(c_rgSaveTypes), c_rgSaveTypes);
								//if (SUCCEEDED(hr))
								{
									// Set the selected file type index to Word Docs for this example.
									//hr = pfd->SetFileTypeIndex(INDEX_WORDDOC);
									//if (SUCCEEDED(hr))
									{
										// Set the default extension to be ".doc" file.
										hr = pfd->SetDefaultExtension(L"txt");
										if (SUCCEEDED(hr))
										{
											// Show the dialog
											hr = pfd->Show(NULL);
											if (SUCCEEDED(hr))
											{
												// Obtain the result once the user clicks 
												// the 'Open' button.
												// The result is an IShellItem object.
												IShellItem *psiResult;
												hr = pfd->GetResult(&psiResult);
												if (SUCCEEDED(hr))
												{
													// We are just going to print out the 
													// name of the file for sample sake.
													PWSTR pszFilePath = NULL;
													hr = psiResult->GetDisplayName(SIGDN_FILESYSPATH,
														&pszFilePath);
													if (SUCCEEDED(hr))
													{
														TaskDialog(NULL,
															NULL,
															L"CommonFileDialogApp",
															pszFilePath,
															NULL,
															TDCBF_OK_BUTTON,
															TD_INFORMATION_ICON,
															NULL);
														CoTaskMemFree(pszFilePath);
													}
													psiResult->Release();
												}
											}
										}
									}
								}
							}
						}
						// Unhook the event handler.
						pfd->Unadvise(dwCookie);
					}
					pfde->Release();
				}
				pfd->Release();
			}
		}*/


	return nextState;
}