#
-----
# Software Requirements Specification 
# For
# Picross Image Puzzle Generator 


**Version 1.0** | 
**October 15, 2016**

#

**Prepared by**
- Lance Lott
- Shaikha Al-Mashaykhi
- Zackery Lavalais


-----
### Table of Contents
1. Introduction                                                           
	* Purpose	                                                          
    * Document Conventions                                                
    * Intended Audience and Reading Suggestions                           
    * Product Scope                                                       
    * References                                                          
2. Overall Description                                                    
    * Product Perspective                                                 
    * Product Functions                                                   
    * User Classes and Characteristics                                    
    * Operating Environment                                               
    * Design and Implementation Constraints                       		  
    * User Documentation                                          		  
    * Assumptions and Dependencies                                		  
    * External Interface Requirements                                	  
    * User Interfaces                                              		  
    * Hardware Interfaces                                          		  
    * Software Interfaces                                         		  
    * Communications Interfaces                                   		  
4. System Features
5. Other Nonfunctional Requirements
6. Appendix A: Glossary

-----
###1. Introduction
**Purpose**

The goal of this Software Requirements Specification (SRS) document is to provide detailed description of the Picross Image Puzzle Generator. It will provide detailed description of the following aspects of the generator. User, software and hardware Interfaces, Use cases scenarios, functional and nonfunctional requirements, features, constraints,and other aspects of the generator.


#
**Document Convention**

This documents follows the IEEE standard 830-1998 software requirements document template. The requirements formatting follows the professor of the CSC 4330 course, Dr. Anas Mahmoud, at Louisiana State University. Bold text is used for emphasizing sections and sub-sections headings. Italicized text is used to label words in the glossary and diagrams.

#
**Intended Audience and Reading Suggestions** 

This document is for software developers, project managers, customers, users, testers, investors, documentation writes, and anyone who is interested in the Picross Image Puzzle Generator. Section one of this document will give you a better understanding the goal of the Picross generator. 

Section two is more useful for the users of the Picross Image Puzzle Generator and for who would like to learn more about what can potentially be done with the generator. Section two also provides the Picross Image Puzzle Generator overview in more details through providing different use cases. 

For developers, sections two, three and four in this document will help them learn about the expected functionalities, more about the software and user interface design of the generator, and lastly but not least the features of the generator and the constraints.

#
**Product Scope**

Picross Image Puzzle Generator is a Windows based program targeted toward anyone that's a fan of Picross. The purpose of the program is to allow a user of any type to solve a Picross puzzle, import a picture of an existing Picross puzzle, create their own Picross puzzles, or scan a Picross puzzle to be solved. This project was conceived from the fact that while we had a passion for Picross, we understand that some of the puzzles are quite difficult and wanted to offer players an alternate approach when they're attempting their puzzles.

**References**
  - SFML – Simple and Fast Multimedia Library: http://www.sfml-dev.org/learn.php 
  - OpenCV - Open Source Computer Vision Library: http://opencv.org/about.html
 
-----
###2. Overall Description

**Product Perspective**

Picross Image Puzzle Generator is a stand-alone program designed for Windows PCs. The program is made in C++ using SFML for the user interface aspects and puzzle importing and exporting options as well as using the OpenCV library for improving the consistency and accuracy at which we can solve the puzzles given. In the future, we may look into porting the program over to one or both iOS and Android operating systems, but at the moment this is solely a Windows based project.

**Product Functions**
(Help with editing?)

1. Create a Picross Puzzle

	a. User can choose the size of the puzzle, from 5x5 to 25x25
	
	b. User can choose which pieces of the puzzle are filled, effectively creating something that's entirely their own
	
	c. System will create the values for the puzzle and verify the puzzle. The System will identify whether the puzzle is unique and show all possible solutions
	
	d. User can export the puzzle they've created as a plaintext file or further modify it

2. Import a Picross Puzzle

	a. User can import a previously created puzzle from a plaintext file
	
	b. System will load this puzzle in the Solver window
	
3. Scan an Image

	a. User can import an image file to be converted to a puzzle
	
	b. User can choose the size of the puzzle, and set the tolerances to convert the image
	
	c. System will convert the image into a simple Picross Puzzle
	
	d. System will verify the puzzle and identify all solutions
	
	e. User can export the puzzle they've created as a plaintext file or further modify it
	
4. Solve a Picross Puzzle

	a. User can attempt to solve a puzzle on their own
	
	b. User can use the help function to ask the System for hints as to their next step
	
	c. User can allow the System to solve the puzzle for them

	
**User Classes and Characteristics**

| Item | UC 2.3.1 Import Puzzle |
| --- | --- |
| Summary | User can import puzzle files |
| Rational | User needs a puzzle to solve if they want to solve a puzzle |
| Users | Puzzle Solver |
| Preconditions | <ul><li>User has a puzzle file on their computer</li></ul> |
| Basic Course of Events | <ul><li>User clicks "Import" button</li><li>User navigates to the puzzle file</li><li>User clicks "Import" button</li></ul> |
| References | N/A |


| Item | UC 2.3.2 Scan Image |
| --- | --- |
| Summary | User can scan images to create puzzles |
| Rational | User should be able to create puzzles out of images |
| Users | Puzzle Creator |
| Preconditions | <ul><li>User has an image file on their computer</li></ul> |
| Basic Course of Events | <ul><li>User clicks "Scan" button</li><li>User navigates to the image file</li><li>User clicks "Scan" button</li><li>User sets size and tolerances in fields</li><li>Once the puzzle looks correct, User clicks "Create Puzzle" button</li></ul> |
| References | N/A |


| Item | UC 2.3.3 Create Puzzle |
| --- | --- |
| Summary | User can color tiles to create puzzles |
| Rational | User should be able to create puzzles from nothing |
| Users | Puzzle Creator |
| Preconditions | <ul><li>Program is open</li></ul> |
| Basic Course of Events | <ul><li>User clicks "Create Puzzle" button</li><li>User sets the size of the puzzle</li><li>User fills in tiles to create their puzzle</li><li>User clicks "Create Puzzle"</li></ul> |
| References | N/A |


| Item | UC 2.3.4 Edit Puzzle |
| --- | --- |
| Summary | User can edit puzzles they have open |
| Rational | User should be able to edit their own puzzles or make changes to existing puzzles |
| Users | Puzzle Creator |
| Preconditions | <ul><li>Puzzle has been loaded in, either by Create Puzzle, Scan Image, or Import Puzzle</li></ul> |
| Basic Course of Events | <ul><li>User clicks "Edit Puzzle"</li><li>User fills in tiles to edit their puzzle</li><li>User clicks "Create Puzzle"</li></ul> |
| References | UC 2.3.1, UC 2.3.2, UC 2.3.3 |


| Item | UC 2.3.5 Export Puzzle |
| --- | --- |
| Summary | User can export their puzzle to a puzzle file |
| Rational | User should be able to save their puzzles |
| Users | Puzzle Creator |
| Preconditions | <ul><li>Puzzle has been loaded in, either by Create Puzzle, Scan Image, or Import Puzzle</li></ul> |
| Basic Course of Events | <ul><li>User clicks "Export Puzzle"</li><li>User navigates to the location they want to save the file</li><li>User names the puzzle file</li><li>User clicks "Export Puzzle"</li></ul> |
| References | UC 2.3.1, UC 2.3.2, UC 2.3.3 |


| Item | UC 2.3.6 Solve Puzzle |
| --- | --- |
| Summary | User can try to solve a puzzle on their own |
| Rational | User should be able to try to solve puzzles |
| Users | Puzzle Solver |
| Preconditions | <ul><li>Puzzle has been loaded in, either by Create Puzzle, Scan Image, or Import Puzzle</li></ul> |
| Basic Course of Events | <ul><li>User fills in tiles or places X's on tiles to try to solve the puzzle</li><li>User clicks "Check Solution" button</ul> |
| References | UC 2.3.1, UC 2.3.2, UC 2.3.3 |


| Item | UC 2.3.7 Ask for Help |
| --- | --- |
| Summary | User can ask the system for help on a puzzle |
| Rational | User may get stuck on a puzzle and require a hint on their next move |
| Users | Puzzle Solver |
| Preconditions | <ul><li>Puzzle has been loaded in, either by Create Puzzle, Scan Image, or Import Puzzle</li></ul> |
| Basic Course of Events | <ul><li>User clicks "Give me a hint" button</li></ul> |
| References | UC 2.3.1, UC 2.3.2, UC 2.3.3, UC 2.3.6 |


| Item | UC 2.3.8 Use Solver |
| --- | --- |
| Summary | User can ask the program to solve the puzzle for them |
| Rational | User may have puzzles that are too difficult for them to solve |
| Users | Puzzle Solver |
| Preconditions | <ul><li>Puzzle has been loaded in, either by Create Puzzle, Scan Image, or Import Puzzle</li></ul> |
| Basic Course of Events | <ul><li>User clicks "Solve it for me" button</li></ul> |
| References | UC 2.3.1, UC 2.3.2, UC 2.3.3, UC 2.3.6 |

| Item | UC 2.3.9 About Picross |
| --- | --- |
| Summary | User can view a summary of the game and how puzzles are solved |
| Rational | User may be unfamiliar with Picross |
| Users | Puzzle Solver, New User |
| Preconditions | <ul><li>Program is open</li></ul> |
| Basic Course of Events | <ul><li>User clicks "About" button</li></ul> |
| References | N/A |


**Operating Environment**

Picross Image Puzzle Generator will be targeted towards the Windows operating system. The ease at which you can take an image file and upload it to an program or website while on a PC is something that we intend to take full advantage of. We intend to use OpenCV as the primary scanning tool when users upload their files for solving/modifying. We also aren't doing anything that is too strenous on the CPU, so this should perform well on any Windows device regardless of the processor. 

When it comes to the user interface we're relying on SFML to do that work for us. It'll allow us to have a clean and simple interface for the users to navigate through as well as maintain all the functionality that we're hoping for. Since one of our main goals is to ofefer the ability to scan and solve puzzles in the program, the UI must be clear and easily navigable so our users aren't stuck in a series of menus.

**Design and Implementation Constraints**

The largest design constraint is the fact that this is a Windows based program running solely on PCs. Since it's only on PC, unless you're carrying a laptop around, if you need it on the go, you're out of luck. Given that Picross is a game made for a portable console, this is something that imposes a major design constraint. Another design constraint is efficiency (given our program isn't CPU intensive, we want it to be as optimal as possible to avoid unnecessary strain).

**User Documentation**

**Assumptions and Dependencies**

Hardware Dependencies 

The scanning feature will depend on the image file being present on the computer/some other external drive.

Software Dependencies

OpenCV - We will use OpenCV to help the users scan their puzzles into the program and further modifying, view, or solve them. 

Reference: http://opencv.org/about.html

SFML - We will use SFML as a basis for developing our UI. It will provide us with the tools we need to access the image files.

Reference: http://www.sfml-dev.org/learn.php 

-----
###3. External Interface Requirements**

**User Interfaces**

A detailed overview of all inputs and outputs from the game is provided in this section. 
A layout of how the user interface will look like and displaying views of how the user will be interacting with the game. Also, the features that should be implemented.

#
- Title Screen

	![Screen_Title](https://s12.postimg.org/76p52kgrh/Title_Screen1.png)

#
- Scan Option

	![Scan_Option](https://s18.postimg.org/sixfaaywp/Scan_Option1.png)

#
- Create Option

	![Create_Option](https://s14.postimg.org/pgcow8g75/Create_Option1.png)

#
- Solve Option

	![Solve_Option](https://s11.postimg.org/6xskqo8w3/Solve_Option1.png)
#
- Help Menu

	![Help_Menu](https://s14.postimg.org/dbdo3onwh/Help_Menu1.png)

#
- Import Option

	![Import_Option](https://s17.postimg.org/5fj9fsntr/Import_Option.png)
	
#
- About Option

	![About_Option](https://s18.postimg.org/pdspsabih/About1.png)


#
**Hardware Interfaces**

Picross Iamge Puzzle Generator is a program designed and developed for Windows based platforms and should work on every PC running the Windows operating system. The program is being developed using C++ and is its own standalone program with no ties to a database or server. As previously stated, as long as the user is running the program on a Windows PC, they should have complete use of every function that the program offers. 

**Software Interfaces**

The Picross Image Puzzle Generator is to be developed for Winndows operating systems using C++ alongside the OpenCV and SFML libraries. The program doesn't communicate with other devices. So, instead our focus is on gaining access to the computer's storage. 

Having access to the computer's storage is an important part of this project as it'll allow users to upload and save their puzzles whenever they want. This is one of the largest functional requirements this program has and could adversely affect our performance if not handled well. All in all, access to our upload and save features combined with the scanning and creating features are something we seriously value so opening up the computer's storage is an important value to have.


**Communications Interfaces**

Being that the program is standalone, it doesn't need to communicate with anything. This program doesn't need to connect to any kind of network to use and is free of any kind of server or database communication. 

-----
###4. System Features                                                        

| Item | FR-4.1: Import Puzzle |
| --- | --- |
| Summary | The system should allow users to import puzzle files they or other users have created |
| Rational | Users may want to solve or edit puzzles created by themselves or other users |
| Requirements | The application should verify that the file is a valid puzzle file. If it is valid, the application will load the puzzle in the Solve window. If it is not valid, the application will display an error message. |
| References | UC 2.3.1: Import Puzzle |

| Item | FR-4.2: Scan Image |
| --- | --- |
| Summary | The system should convert image files into puzzles based on the user's requirements |
| Rational | Users may wish to create puzzles based off of images without trying to copy over the images likeness in the Create Puzzle window |
| Requirements | The application should verify that the file is an image file. If it is valid, the application will load the image into the Scan Image window. If it is not valid, the application will display an error message. |
| References | UC 2.3.2: Scan Image, UC 2.3.3: Create Puzzle |

| Item | FR-4.3: Create Puzzle |
| --- | --- |
| Summary | The system should allow users to create puzzles from scratch based on the tile grid |
| Rational | Users may wish to create puzzles that are not based on images they have |
| Requirements | None |
| References | UC 2.3.3: Create Puzzle |

| Item | FR-4.4: Edit Puzzle |
| --- | --- |
| Summary | The system should allow users to edit puzzles they have loaded in |
| Rational | Users may want to continue working on puzzles they previously created, or edit puzzles other people have created |
| Requirements | A puzzle must currently be loaded in to the Solve window |
| References | UC 2.3.4: Edit Puzzle |

| Item | FR-4.5: Export Puzzle |
| --- | --- |
| Summary | The system should allow users to export puzzles to a puzzle file |
| Rational | Users may want to save their work or share their puzzles with other people |
| Requirements | A puzzle must currently be loaded in to the Edit window |
| References | UC 2.3.5: Export Puzzle |

| Item | FR-4.6: Solve Puzzle |
| --- | --- |
| Summary | The system should allow users to try to solve puzzles on their own |
| Rational | Users may want to try to solve puzzles they or others have created |
| Requirements | A puzzle must be currently loaded into the Solve window |
| References | UC 2.3.6: Solve Puzzle |

| Item | FR-4.7: Auto Hint Marking |
| --- | --- |
| Summary | The system should mark off hints that are used as the user solves puzzles |
| Rational | It is hard to track which hints have been used |
| Requirements | A User must be solving a puzzle |
| References | UC 2.3.6: Solve Puzzle |

| Item | FR-4.8: Ask for Help |
| --- | --- |
| Summary | The system should be able to give users hints as to which moves they should try next |
| Rational | Users may get stuck on one part of the puzzle and need help to move along |
| Requirements | A User must be solving a puzzle |
| References | UC 2.3.7: Ask for Help |

| Item | FR-4.9: Use Solver |
| --- | --- |
| Summary | The system should be able to solve puzzles |
| Rational | Users may have trouble with a puzzle or want to see the end result |
| Requirements | A User must be solving a puzzle |
| References | UC 2.3.8: Use Solver |

| Item | FR-4.10: About Picross |
| --- | --- |
| Summary | The system should display information about Picross puzzles |
| Rational | Some users may be unfamiliar with how Picross works and is played |
| Requirements | None |
| References | UC 2.3.9: About Picross |
	
	
-----
###5. Other Nonfunctional Requirements                                       

| Item | NF-5.1: Usability |
| --- | --- |
| Summary | The system should be easy to use |
| Rational | If the system is difficult to use, users may not like the system and fail to use it |
| Requirements | Any function should be reachable from the home page with three or less clicks of menu navigation. Buttons should be clearly labeled and have tooltips explaining their functions. |
| References | None |

-----
###6. Appendix A: Glossary                                                      

| Term | Definition |
| --- | --- |
| Picross | The type of puzzle this application is associated with |
| Puzzle | An individual puzzle, involving a grid and clues
| Puzzle File | A plaintext file that holds the information for the puzzle |
| User | A person using the system |
| Puzzle Creator | A person creating a puzzle |
| Puzzle Solver | A person solving a puzzle |
| New User | A person unfamiliar with the rules of Picross |
