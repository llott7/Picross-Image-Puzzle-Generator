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
    * Intended Audience
    * Product Scope                                                       
    * References                                        
    * Design Summary
2. Main system architecture (Logical view)                                                    
    * Overview
3. Sub-systems architecture
    * Scanning/Importing
    * Solver
	- Help System
	- System Solve
    * Puzzle Creation
4.  Rationales for each architectural choice  
    * Overview
    * Scanning/Importing
    * Solver
	- Help System
	- System Solve
    * Puzzle Creation
5. Application Views
    * Logical view
    * Development view
    * Physical view
    * Work-assignment view
6. User interfaces
    * User Interface Description
    * User Interface Design
	
-----
###1. Introduction
**Purpose**

The purpose of the Software Design Document is to discuss and describe the implementation of the Picross Image Puzzle Generator(PIPG) as specified in the Software Requirements Document. The Picross Image Puzzle Generator is designed to allow the the user to upload images and converts them to puzzles, import puzzles, create and exports puzzles, provides hints to solve a puzzles, and solves puzzles.

**Intended Audience**

Unlike the SRS document, which was written on a much larger and understandable scope for a wider audience, this SSD is more for those that are directly involved in the program or will be in the future. Whether it is us as developers right now or for consultants and product distribution services that might end up viewing it in the future, we're providing a general summmary of our product and how it works, why it works, and who is likely to use it. 

**Product Scope**

The Software Design Document is meant to give the reader a more streamlined overview of how the entire product works. This is specifically targeted towards the people who are working closely on the product, which includes anyone from developers to any future distributors and so on and so forth. The Picross Image Puzzle Generator is meant to be a fun and useful program for fans of Picross to solve and create their own puzzles.

**References**

  - SFML – Simple and Fast Multimedia Library: http://www.sfml-dev.org/learn.php 
  - OpenCV - Open Source Computer Vision Library: http://opencv.org/about.html
 

**Design Summary**

Our main focus when conceiving this program was to craft something that was both unique and interesting to us as developers. When you're making a program, it's all about what that program can do and what features it has and this is where we set ourselves apart from everyone else. The ability to import a Picross puzzle and then solve or have it solved (entirely the choice of the user) is something that is unprecedented and should not be taken lightly. This document is going to walk you through all aspects of our design. From the user interface to the concepts related to every one of our program's features.
 
Our project is built on an object-oriented approach with plenty of room to add and develop in the future. Given our program is entirely standalone, we don't have to worry about servers or databases and that opens up a lot of future opportunities for implementation. Whether it be porting the program over to mobile or adding things to the base desktop application, the possibilites here are plentiful.

-----
###2. Main system architecture

**Overview**

Picross Image Puzzle Generator is a program that's entirely meant to be used in conjunction with the game Picross. The program is meant to be simple and easy to use for anyone that wants to pick it up no matter if that person is a child, a teenager, etc. Any fan of Picross should be able to use this program with no hassle and should find every one of our features simple to use as well. The user can import a Picross puzzle into the generator and from there they can use the interface to navigate to different features. They can solve the puzzle or, if they're stuck on a puzzle, have the generator solve the puzzle for them and/or give them hints and tips to help them complete it on their own. Users also have the ability to think of and create their own puzzles, in which the generator will check to see if the puzzle that the user has made is actually a valid puzzle that meets standard Picross parameters as well as the puzzle size constraints we've set within the program. From here, we allow the user to save the puzzle to their computer for their own personal use and reference.



-----
###3. Sub-systems architecture

**Scanning/Importing**

Any user of the Picross Image Puzzle Generator (PIPG) has the option to scan and import a puzzle into the generator for their own use. Scanning is a key feature of the PIPG which for now it allows the user to upload an image and convert it to a puzzle, and because of we're going to limit the size of the puzzle that can be scanned in. When the puzzle is scanned in and verified to be within the threshold of the size limit, the user has the ability to modify it and create their own unique puzzle from an already existing puzzle or go straight to the solver and make an attempt to solve it there with the optional help of the system. If the user is modifying a puzzle, they must also pass a system check to ensure that the puzzle that they've newly created via modification is, in fact, a legitimate Picross puzzle.

**Solver**

This is the main feature that the program offers and its the most important. From here, the user is allowed to take a puzzle that they've created, modified, or scanned in and solve it. The solver also gives the user access to several features that are only present within the solver screen. From this screen, the user can then ask the system for help with the hint system or have the system fully complete the the puzzle for them and then view the completed puzzle and see where and how they were stuck. 

- **Help System**

	With this system, the user has the opportunity to take any kind of legitimate puzzle, whether it be one that they've created, found, are currently stuck on, etc., and solve it with the aid of the system. The system gives the user tips or hints on how to solve the puzzle in the manner of "Have you tried looking at...?" or "You should focus on row/column #..." in an attempt to get the user set on the right track to solve a puzzle that has been giving them trouble without directly solving it for them.

- **System Solve**

	This feature is the exact opposite of the help feature in that instead of aiding the user with tips and hints, it'll just outright solve the puzzle for them. With this, the user can see how they were wrong in their predictions and improve their Picross skill by looking at realtime examples of any kind of legitimate puzzle they want to create or scan, no matter the difficulty. 

**Puzzle Creation**

The puzzle creation feature is something that we're pushing really hard. Enabling the user to not only scan in an existing puzzle and form and shape it into a new puzzle is something really innovative and unique. The most important part of this feature, though, is the ability to craft your own puzzle from scratch. The only limitation we're putting forth is on the size, which is currently being determined. Aside from that, a user can create their own puzzle in any way they feel or see fit with our system. Once they're done making it, the system then verifies that it passes all qualifications to be considered a legitimate Picross puzzle and then prompts the user to save it to their computer. 

-----
###4. Rational for each architectural choice

**Overview**

Designing this program in an object-oriented style was imperative because there are tons of moving parts within and all have to act when we need them to and no time else. By using the object-oriented approach, it allowed us to create these moving parts sequentially and made sure they all fit together like a puzzle, but worked together like a well-oiled and efficient machine.

The main part of our program is the actual Puzzle Solver part. It's what the entire program is based on and requires an extreme amount of checking and logic. It has to be accurate, consistent, and efficient or else the entire program as a whole will fail. It's responsible for checking to see if the puzzles are legitimate, being able to give the user hints and tips if they need them, and actually solving the puzzle if the user requests it to. 

The importing and scanning parts are responsible for allowing the users to scan in a desired image of a puzzle and view it in our program. It also allows the user to modify the puzzle that they've scanned or take it to the solver which they can then use to solve the puzzle if they so desire. 

The puzzle creation part requests that the user inputs a size for which to develop their puzzle. After this, it checks to see if the size is within our designated parameters and allows the user to proceed with making their puzzle. Once they're done and have created what they feel is a puzzle that they're happy with, they can check to see if it's a legitimate puzzle or if they'll need to revise it. Remember that for a Picross puzzle to be legitimate, it can only have one unique solution. After they've successfully passed the second check, they're allowed to take the puzzle that they've made and save it to their computer for future usage.

**Scanning/Importing**

Scanning is dealt with in the importing component. It takes a puzzle that the user has selected to import from their device and inputs it into the program. From there, the user is allowed to traverse throughout the UI and find whatever they want to do with the uploaded puzzle (modify, solve, upload another). The Solver has complete access to the file once the user has uploaded it into the program and the user can then proceed to solve or get help with the selected puzzle. 

**Solver**

The Solver component controls every aspect of how we solve and help users to solve puzzles. Once the user scans in a file from the import component, the solver component takes in the uploaded file if the user wants to solve the puzzle and brings it into the solver screen. From there, the user can then solve the puzzle or get helpful hints on how to solve the puzzle thanks to the helper that's built into the solver component. This helper will display tips in the form of "You should try looking at row/colomun #..." or "Have you tried looking at...?" to ensure that the user can simply understand what it's telling them to do as well as gain an understanding as to where they went wrong. The user can also use the check feature which is also present within the solver component to see if what they're doing in the puzzle solver is correct and that they're on the right track to correctly completing the puzzle. If what the user has input is incorrect, the checker will tell the user that they should fix or adjust something before continuing on because their current puzzle isn't correct. 

- **Help System**

	The Solver component gives the user the opportunity to ask for a help or a hint on a desired puzzle that they've uploaded. If the user asks the system for assistance, they're given an on-screen hint in the form of a sentence detailing what their next best move should be. Also, the user can check the puzzle to see if what they have entered already is correct or incorrect. Once they do this, they're sent back to the Solver component to proceed with their puzzle.

- **System Solve**

	The Solver component has the ability to outright solve a desired puzzle for a user. For instance, if the user is stuck and doesn't foresee themselves finishing a puzzle or they just want to know what the solution to a really difficult puzzle is, they can opt into having the system solver within the solver component do it for them and return the resulting solution. The Solver component then displays this solution for the user to see and save.

**Puzzle Creation**

The Creation component is what enables the user to create or modify their own personal Picross puzzles. With the help of the import component, the user can select a file and upload it into the program and the Creation component will then allow the user to modify the uploaded puzzle and creat something that's uniquely their own. As long as it meets the rule of one unique solution, the user can do whatever they want to the puzzle that they've uploaded. Also available within this component is the ability to just create a puzzle from scratch. This is where the user is prompted to input the parameters of the puzzle they want to create. (For example, the user input that they want to make a 5x5 Picross puzzle) Again, the puzzle that's created in this component must meet standard Picross rules to be considered legitimate. From here, the user can then save the puzzle that they've created to their device, or input it into the solver.
	
	
-----
###5. Application Views
**Logical View**

![unnamed](https://s22.postimg.org/wdj2cicox/unnamed.png)

**Development view**

![unnamed_2](https://s14.postimg.org/4y185c8rl/unnamed_2.png)

**Physical view**

![unnamed_1](https://s14.postimg.org/aigx7dsf5/unnamed_1.png)

**Work-assignment view**

Our assignemnts are as follow:
* User Interface Design: Shaikha Al-Mashaykhi
* Program/Game Logic: Lance Lott
* API integration: Zackery Lavalais	

The UI design is mostly complete for the most part and is being handled by Shaikha. She has an interest in UI design and volunteered for this particular role almost instantly. We're using SFML library to develop the UI for the Picross Image Puzzle Generator.

The program logic development is currently being designed by Lance as his primary skills, experience, and main interest in the program drove him to want to hard code and develop this part of the program.

The API integration, openCV are what Zachery is working on as well as writing most of the documentations. 
	
----
###6. User interfaces

The following sections provide a description of the User Interface and an example diagram of the interface for the Picross Image Puzzle Generator.

**User Interface Description**


The UI for the Picross Image Puzzle Generator is designed to be easy to use.
When the users start the Picross Image Puzzle Generator(PIPG) game, they will see the main view which displays the title and the main menu of the PIPG game.
The main menu includes the following options: Scan, Create, Import, and about. When the users click on the Scan option, the current view will be changed from the main view to Scan view. And similarly with the other options in the main menu, where 
each one of them takes the user to the view of the same name.

In the scan view: the user will be able to browse an existed image in their PC by clicking on the open button. Where the image will be converted to a puzzle and it will be go through a system check where the
PIPG check system checks if the puzzle has a unique solution, the size is within the range provided. After passing the check system, the user can export the puzzle or he/she can click on (solve) button which will take them to the Solve view.
The users can also go back to the main view by clicking the back button.

In the Create view: The user will be asked to enter a size of the puzzle he/she wants in pixels. Then an empty grid of that size will be displayed with extra colums and rows which will allow the use to enter the numbers of their puzzle.
The create view provides the (check) feature for the users to help them check if their puzzle is unique or not. The user is also given the option of exporting their puzzle or to go to the solve view to solve the puzzle they created.
The users can also go back to the main view by clicking the back button.

In the Solve view: This view will be accessed from the Scan, create and import views. Here, the user can solve the puzzle he/she got from an image they upload it, the puzzle they created, or the puzzle the imported.
The user can use the two features provided. If the user does not know what the next step is the (give me hint) feature will provide hints that help the user be on the right track of the game. However, if the user is looking for a solution, the  (solve it for me) feature will  provide the solution.

In the Import view: When the user click on the the Import option in the main menu, an open file window will pop up. This feature allows the user to import existed picross puzzle type files. Then it will take the user to the Solve view directly to solve the puzzle.

In the About view: This view will display a brief summary about the Picross Image Puzzle Generator and team members. The user can also go back to the main view by clicking on the back button.

**User Interface Design**
	
![Picture3](https://s13.postimg.org/nff0szutz/Picture3.png)


----

