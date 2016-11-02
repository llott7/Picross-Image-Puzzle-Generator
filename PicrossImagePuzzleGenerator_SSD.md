#
-----
# Software Design Document
# For
# Picross Image Puzzle Generator 


**Version 1.0** | 
**November 2, 2016**

#

**Prepared by**
- Lance Lott
- Shaikha Al-Mashaykhi
- Zackery Lavalais


 
  



-----
### Table of Contents
1. Introduction                                                           
	* Purpose	                                                                                                                              
    * Product Scope                                                       
    * References                                        
    * Overview	
2. Main system architecture (Logical view)                                                    
    *
    *
    *	
3. Sub-systems architecture
    *
	*
	*
4. Rational for each architectural choice  
    *
	*
	*
5. Development view
    *
	*
	*
6. Physical view
    *
	*
	*
7. Database view
8. Work-assignment view
    *
	*
	*
9. Element catalog
    *
	*
	*
10. User interfaces
    * User Interface Description
	* User Interface Design

	
	
-----
###1. Introduction
**Purpose**

The purpose of the Software Design Document is to discuss and describe the implementation of the Picross Image Puzzle Generator as specified in the Software Requirements Document. The Picross Image Puzzle Generator is designed to allow the the user to import puzzles, scan or upload images and converts them to puzzles, exports puzzles, and provides hints to solve puzzles.

**Intended Audience**

Unlike the SRS document, which was written on a much larger and understandable scope for a wider audience, this SSD is more for those that are directly involved in the program or will be in the future. Whether it's us as developers right now or for consultants and product distribution services that might end up viewing it in the future, we're providing a general summmary of our product and how ir works, why it works, and who is likely to use it. 

**Product Scope**

The Software Design Document is meant to give the reader a more streamlined overview of how the entire product works. This is specifically targeted towards the people who are working closely on the product, which includes anyone from developers to any future distributors and so on and so forth. The Picross Image Puzzle Generator is meant to be a fun and useful program for fans of Picross to solve and create their own puzzles.

**References**

  - SFML – Simple and Fast Multimedia Library: http://www.sfml-dev.org/learn.php 
  - OpenCV - Open Source Computer Vision Library: http://opencv.org/about.html
 

**Design Summary**

Our main focus when conceiving this program was to craft something that was both unique and interesting to us as developers. When you're making a program, it's all about what that program can do and what features it has and this is where we set ourselves apart from everyone else. The ability to scan a Picross puzzle and then solve or have it solved (entirely the choice of the user) is something that's unprecedented and shouldn't be taken lightly. This document is going to walk you through all aspects of our design. From the user interface to the concepts related to every one of our program's features.
 
Our project is built on an object-oriented approach with plenty of room to add and develop in the future. Given our program is entirely standalone, we don't have to worry about servers or databases and that opens up a lot of future opportunities for implementation. Whether it be porting the program over to mobile or adding things to the base desktop application, the possibilites here are plentiful.

-----
###2. Main system architecture
**2.1 Overview**

Picross Image Puzzle Generator is a program that's entirely meant to be used in conjunction with the game Picross. The program is meant to be simple and easy to use for anyone that wants to pick it up no matter if that person is a child, a teenager, etc. Any fan of Picross should be able to use this program with no hassle and should find every one of our features simple to use as well. The user can scan a Picross puzzle into the generator and from there they can use the interface to navigate to different features. They can solve the puzzle or, if they're stuck on a puzzle, have the generator solve the puzzle for them and/or give them hints and tips to help them complete it on their own. Users also have the ability to think of and create their own puzzles, in which the generator will check to see if the puzzle that the user has made is actually a valid puzzle that meets standard Picross parameters as well as the puzzle size constraints we've set within the program. From here, we allow the user to save the puzzle to their computer for their own personal use and reference.

**2.2 Scanning/Importing**

Any user of the Picross Image Puzzle Generator (PIPG) has the option to scan and import a puzzle into the generator for their own use. Scanning is a key feature of the PIPG and because of we're going to limit the size of the puzzle that can be scanned in. When the puzzle is scanned in and verified to be within the threshold of the size limit, the user has the ability to modify it and create their own unique puzzle from an already existing puzzle or go straight to the solver and make an attempt to solve it there with the optional help of the system. If the user is modifying a puzzle, they must also pass a system check to ensure that the puzzle that they've newly created via modification is, in fact, a legitimate Picross puzzle.

**2.3 Solver**

This is the main feature that the program offers and its most important. From here, the user is allowed to take a puzzle that they've created, modified, or scanned in and solve it. The solver also gives the user access to several features that are only present within the solver screen. From this screen, the user can then ask the system for help with the hint system or have the system fully complete the the puzzle for them and then view the completed puzzle and see where and how they were stuck. 

*2.3.1 Help System*

With this system, the user has the opportunity to take any kind of legitimate puzzle, whether it be one that they've created, found, are currently stuck on, etc., and solve it with the aid of the system. The system gives the user tips or hints on how to solve the puzzle in the manner of "Have you tried looking at...?" or "You should focus on row/column #..." in an attempt to get the user set on the right track to solve a puzzle that has been giving them trouble without directly solving it for them.

*2.3.2 System Solve*

This feature is the exact opposite of the help feature in that instead of aiding the user with tips and hints, it'll just outright solve the puzzle for them. With this, the user can see how they were wrong in their predictions and improve their Picross skill by looking at realtime examples of any kind of legitimate puzzle they want to create or scan, no matter the difficulty. 

**2.4 Puzzle Creation**



-----
###3. Sub-systems architecture**




-----
###4. Rational for each architectural choice                                                       

	
	
-----
###5. Development view                                       


-----
###6. Physical view                                                     




-----
###7. Database view




-----
###8. Work-assignment view
    
	
	
	
----
###9. Element catalog


----
###10. User interfaces

    **User Interface Description**
	
	**User Interface Design**
	
	![Picture1](https://s15.postimg.org/tliwh1lor/Picture1.png)