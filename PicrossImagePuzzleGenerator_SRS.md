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

Picross Image Puzzle Generator is a Windows based application targeted toward anyone that's a fan of Picross. The purpose of the application is to allow a user of any type to solve a Picross puzzle, upload a picture of an existing Picross puzzle to be solved, or create their own Picross puzzles. This project was conceived from the fact that while we had a passion for Picross, we understand that some of the puzzles are quite difficult and wanted to offer players an alternate approach when they're attempting their puzzles.

**References**
  - SFML – Simple and Fast Multimedia Library: http://www.sfml-dev.org/learn.php 
  - OpenCV - Open Source Computer Vision Library: http://opencv.org/about.html
 
-----
###2. Overall Description

**Product Perspective**
Picross Image Puzzle Generator is a stand-alone application designed for Windows PCs. The application is made in C++ using SFML for the user interface aspects and puzzle importing and exporting options. As well as using the OpenCV library for improving the consistency and accuracy at which we can solve the puzzles given. In the future, we may look into porting the application over to both iOS and Android operating systems, but at the moment this is solely a Windows based project.

**Product Functions**
1. Solve a Picross puzzle
	a. Allow user to import an existing Picross puzzle as a JPG/PNG file 
	b. Allow user to solve the puzzle themselves with the assistance of a "Help" function or let the application solve it for them
2. Create a Picross puzzle

**User Classes and Characteristics**

**Operating Environment**

**Design and Implementation Constraints**

**User Documentation**

**Assumptions and Dependencies**

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

**Software Interfaces**

**Communications Interfaces**

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
