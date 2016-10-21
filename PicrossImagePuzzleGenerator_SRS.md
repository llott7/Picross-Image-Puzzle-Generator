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
    * System Feature 1                                            		  
    * System Feature 2                                           		  
5. Other Nonfunctional Requirements                                       
    * Performance Requirements                                    		  
    * Safety Requirements                                          		  
    * Security Requirements                                        		  
    * Software Quality Attributes                                  		  
    * Business Rules                                               		  
6. Other Requirements                                                     
7. Appendix A: Glossary                                                      
8. Appendix B: Analysis Models                                               
9. Appendix C: To Be Determined List                                         


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

1. Solve a Picross puzzle

	a. Allow user to import an existing Picross puzzle as a JPG/PNG file 
	b. Allow user to solve the puzzle themselves
	c. User can allow the program to attempt to solve the puzzle itself
	
2. Create a Picross puzzle

	a. User can choose from a variety of sizes to set as their Picross layout
	b. User can set the values for the puzzles, effectively creating something that's entirely their own
	c. System will then proceed to check if the puzzle the user created is valid
	d. User can then save the puzzle they've created or further modify it
3. Scan puzzles

	a. User will be able to upload an image of a Picross puzzle
	b. User can scan the image of the puzzle
	c. System checks to see if the image of the puzzle is within the preset limits of the program (i.e. 15 x 15, 20 x 20)
	d. User can then modify or solve the puzzle with or without help from the program
4. Help

	a. Users can get hints when working on a puzzle from the System
	
**User Classes and Characteristics**

**Operating Environment**

Picross Image Puzzle Generator will be targeted towards the Windows operating system. The ease at which you can take an image file and upload it to an program or website while on a PC is something that we intend to take full advantage of. We intend to use OpenCV as the primary scanning tool when users upload their files for solving/modifying. We also aren't doing anything that is too strenous on the CPU, so this should perform well on any Windows device regardless of the processor. 

(add extra stuff about SFML and other hard coding aspects here, I added what I knew about!)

**Design and Implementation Constraints**

The largest design constraint is the fact that this is a Windows based program running solely on PCs. Since it's only on PC, unless you're carrying a laptop around, if you need it on the go, you're out of luck. Given that Picross is a game made for a portable console, this is something that imposes a major design constraint. Another design constraint is efficiency (given our program isn't CPU intensive, we want it to be as optimal as possible to avoid unnecessary strain).

**User Documentation**

**Assumptions and Dependencies**

Hardware Dependencies 

The scanning feature will depend on the image file being present on the computer/some other external drive.

Software Dependencies

OpenCV - We will use OpenCV to help the users scan their puzzles into the program and further modifying, view, or solve them. 

Reference: http://opencv.org/about.html

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

Picross Iamge Puzzle Solver is a program designed and developed for Windows based platforms and should work on every PC running the Windows operating system. The program is being developed using C++ and is its own standalone program with no ties to a database or server. As previously stated, as long as the user is running the program on a Windows PC, they should have complete use of every function that the program offers. 

**Software Interfaces**



**Communications Interfaces**

Being that the program is standalone, it doesn't need to communicate with anything. This program doesn't need to connect to any kind of network to use and is free of any kind of server or database communication. 

-----
###4. System Features                                                        
    **System Feature 1**
    **System Feature 2**
	
	
-----
###5. Other Nonfunctional Requirements                                       
**Performance Requirements**

**Safety Requirements**

**Security Requirements**

**Software Quality Attributes**

**Business Rules**


-----
###6. Other Requirements                                                

-----
###7. Appendix A: Glossary                                                      

-----
###8. Appendix B: Analysis Models                                               

-----
###9. Appendix C: To Be Determined List    
