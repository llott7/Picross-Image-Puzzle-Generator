#
-----
# Project Management Document
# For
# Picross Image Puzzle Generator 


**Version 1.0** | 
**December 2, 2016**

#

**Prepared by**
- Lance Lott
- Shaikha Al-Mashaykhi
- Zackery Lavalais


 
 
 
 
 
 
 
 

-----
### Table of Contents
1. Vision                                                          
    * Project Scope	 
    * Ideology
    * Ultimate Goal                                                       
2. Proces Model                                                   
    * Waterfall Method
3. Configuration Management
    * GitHub
    * Google Drive
4.  Deliverables 
    * Software Requirements Specification
    * Software Design Document
    * Software Testing Document
    * Project Code
    * Deployment Executables
    * How to use the PIPG
5. Risks
    * Human Risks
    * Time Risk
    * Resources Risk
    * Liability
6. Team Members
    * Lance Lott
    * Shaikha Al-Mashaykhi
    * Zachery Lavalais
    * Programming Approach/Team Style
7. Project Schedule
    * Milestones
    * Estimates
    * Schedule
    * Estimation Method
8. Meeting Summaries

-----
###1. Vision

**Project Scope**

The purpose of our project is rather simple: to create something that will be new and unique, but also helpful to others. Our main idea while conceiving this project was to think of something that we enjoyed, which could’ve been a game, program, movie, etc., and then think of some way to make that thing better. 
That’s when we came across the idea of making a helpful tool for Picross players both old and new. Whether it be someone that just picked up the game and wanted to have something to show them the ropes and help them out when they get stuck or someone that’s a veteran, but can’t figure out that one daunting puzzle to save their life, we wanted the program to be accessible to all from the very beginning.
 
 
**Ideology**

We wanted to craft something that was, to our knowledge, nonexistent. We saw the opportunity to take something that was in heavy demand due to the popularity of the game (A Picross solver) and combine it with something new and exciting so that it’d give people a reason to want to try it out. (A Picross helper/scanner)
   
   
**Ultimate Goal**

Make something that’s both fun for the developers (us) to conceive and use and enjoyable to the user base is the ultimate goal of this project. Throughout the entirety of our project, we prided ourselves on how unique of a project we had and constantly tried to think up ways to make it more innovative and fun to use. 


-----
###2. Process Model

**Waterfall Method**

![Waterfall](https://s14.postimg.org/stp7camdt/waterfall.jpg)


It was established very early on into the idea conception period that the Waterfall methodology was something that fit into what we were trying to achieve the most. Early on, we established the requirements with the help of the Software Requirements Specification document and that began the “waterfall” of development for the project. While, traditionally, the waterfall method is something that is somewhat of a locked cycle, meaning that once it’s started there isn’t any room to change or modify anything., we happened to change a few things during the development cycle. While this was suboptimal and we feel that maybe an iterative approach would’ve been more sufficient, the waterfall method still provided us with a decent skeletal framework to get our project done efficiently.  

We felt that we needed to change up some of the initial features of the project that were a little too ambitious given our window of time and that’s what caused us to diverge from the waterfall a slight bit. Because of this, we realized that Phased Development model might have been the better choice, given that it would’ve enabled us to release our bare bones Solver, which was completed very early into the dev cycle, and then constantly and consistently release feature updates from there.


-----
###3. Configuration Management

**GitHub**

The team used GitHub in every facet of building the project as a whole. We used it to create the .md files for most of our documents, outside of this one, as well as used it to for outright code commits for our main Solver and GUI based code. When the project is completely done, everything that we’ve built and done so far should be available for viewing. Below is an example of one of the things we used GitHub for. Because of its easy ability to share and edit in realtime, markdown was an easy choice to use for documentation.
   
![md](https://s13.postimg.org/j4cw03s4n/image.png)
   
GitHub was also useful in the fact that it’s really easy to share the repository to anyone that might be slightly interested in looking at our project and providing us with feedback. While most of the code wasn’t pushed until later on, we still had all the documents up as soon as they were done for the sake of feedback on how it was structured.

GitHub was used for the final code commit of our project, which is available for viewing at this very moment. (URL: https://github.com/llott7/Picross-Image-Puzzle-Generator/tree/master/PIPG)


**Google Drive**

   Aside from GitHub, we also used Google Drive to share files that we didn’t really feel were worthy of being committed to the GitHub repository. Things like meeting summaries and some early code were transmitted over Drive as well as some files we needed to properly completely the documents. While the documents themselves were made completely on GitHub. All of the files for the final presentation were shared exclusively over Drive for the sake of convenience and ease of access, though.


-----
###4. Deliverables

**Software REquirements Specification**

   The purpose of the Software Requirements Specification (SRS) document was to provide detailed description of the Picross Image Puzzle Generator. It provides a detailed description of the following aspects of the generator: User, software and hardware Interfaces, Use cases scenarios, functional and nonfunctional requirements, features, constraints,and other aspects of the generator.
   
   It clearly and concisely outlined the use cases of the PIPG as well as listed and identified the features and constraints. Without the SRS, the project would have had a harder time getting off of the ground and into the development cycle. It also helped to outline and explain the purpose of our project as well as provide instances in which someone might want to use the program that we were creating. It showed off and helped us craft a rough sketch of what we wanted our UI to look and feel like and outline the hardware constraints. For instance, we wanted to make sure that the program was efficient and ran on most machines without issue.


**Software Design Documnet**

   The purpose of the Software Design Document was to discuss and describe the implementation of the Picross Image Puzzle Generator (PIPG) as specified in the Software Requirements Document. The Picross Image Puzzle Generator is designed to allow the the user to upload images and converts them to puzzles, import puzzles, create and exports puzzles, provides hints to solve a puzzle, and solves puzzles.
   
   The Software Design Document is meant to give the reader a more streamlined overview of how the entire product works. This is specifically targeted towards the people who are working closely on the product, which includes anyone from developers to any future distributors and so on and so forth. The Picross Image Puzzle Generator is meant to be a fun and useful program for fans of Picross to solve and create their own puzzles.


**Software Testing Document**

   The intended purpose of the Software Testing Document is to ensure that everything that the project uses runs correctly and without failure. For instance, we have to test whether the program opens and closes when it’s supposed to as well as the Solver works how it should, all the buttons are reactive and do what they should, etc. This was to ensure that the program ran as best and efficiently as possible as we were getting ready to give a live demo and submit the final code for grading.
   
   
**Project Code**

![code](https://s11.postimg.org/s4ypkaow3/code.png)
   
   The final project code (as shown above in GitHub) is what contains the entirety of our project. This is what we outlined and tested in all the documents. (also listed above) Inside the repository are all of files needed to run and reproduce what we’ve coded including the solver, the UI, the images used for the UI, etc. 


**Deployment Executables**

   This refers to what it takes to run our project on your own machine as opposed to one of us running it for you. This means that the code we’ve provided is 100 percent reproducible and should work on all machines with the available software. Since our project does have an executable file in the repository, it should run perfectly fine and as we tested.
   
   
**How to use the PIPG**

![main_Screen](https://s17.postimg.org/54wr3l4xb/main_Screen.png)

  This is the main menu screen, which you can view upon running the file that I outlined in the previous section. From here, you can choose to do a variety of different things in the program, including scanning, creating, solving, or importing a Picross puzzle file. Clicking the respective word will take you to the respective screen. For instance, clicking scan will take you to: 
  
  ![Scan_Option_Window1](https://s18.postimg.org/5z0opyba1/Scan_Option_Window1.png)
  
  Which happens to be the window that we use for the scan option. This works with every one of the buttons listed in the main menu. Not seen here is the close button for the window, but it’s there when you run the actual file itself.
  

-----
###5. Risks

**Human Risks**

   The loss of morale and inappropriate allotment of time were an issue for the project. While we tried to communicate as much and as often as possible, the case was just that sometimes we weren’t nearly as active as we should have been and that caused the project to function in a somewhat suboptimal manner. The entirety of the project was coded in C++ and Zackery and Shaikha had no previous C++ experience, so they had to learn these concepts and implementation schemes on the fly. Several factors including this and unresponsiveness caused us to lose a lot of much needed time to work on the project.
    
   Sickness played a bit of a factor in how we ran our project as well, given that some of us couldn’t attend meetings because they were sick. Given how small our group of people were, this was something that greatly impacted the way we would work and how we would be able to get work done efficiently. This lead to some missed opportunities and deadlines which caused us all to have work harder and smarter when it came to the project so that we would efficiently and effectively complete the project.


**Time Risk**
   
   As outlined in the above section, the fact that we weren’t always readily available to work on the project caused us to miss a lot of milestones and deadlines that we set for ourselves (not outlined in the milestones section) and caused us to rush to finish toward the final stages of the project to get stuff done. We all communicated whenever possible through GroupMe, but since we started the project around a month late due to uncontrollable circumstances, we were already behind the other groups in terms of time spent developing our project. We still managed to finish and code a project that we were all proud of, though, despite the time risks that we incurred and somehow managed.
   
**Resources Risk**
  
   The resources that the team needed to complete the project was never an issue as all of the things we used to design the project were open source and free to use. (SFML, OpenCV, Visual Studio, Inkscape, Netbeans, GitHub, Google Drive) Since all the tools we needed were free to use and can easily be replicated using them, the risk of using these resources is minimal. 

**Liabilty**

   Legally speaking, as described above, all of the tools used in this project were free and open-source. None of the companies that are responsible and have ownership over those tools are liable for anything that may go wrong as clearly defined in the terms of service for them. None of these products or services are ours to own and we take full responsibility for any grievances or issues that Picross Puzzle Image Generator may cause. 


----
###6. Team Members

**Lance Lott**
  
  - Main Programmer
  - Game Logic

As the main programmer, my main role was on the functionality of the project. The main portion of my work was the Solver suite, which was the main functionality concerning Game Logic. I also assisted Shaikha on the GUI for functionality purposes and provided the original idea for the project. Additionally, I helped edit and format the documentation to ensure quality standards. Finally, I was the main conflict resolver on GitHub. I attended most of the meetings, only missing two meetings due to prior plans. Unfortunately, due to lack of communication and Shaikha and Zachary's lack of expertise in C++, the project didn't meet all the goals we initially set out for it.
   
**Shaikha Al-Mashaykhi**

   - UI Design
   - Documentation
   
I had my part for stating my opinions and suggestions for the the project. My main role was to work on the design of the project and to figure out the SFML coding part to upload the assets of the game, where Lance's part was the functionality coding for the GUI base code I made. Second main role was helping with the documentations and working on the markdown format then committing on github the initial files for edits. I helped and worked on the Software Requirement Specifications Document, the Software Design Document, the Software Testing Document, and the Project Management Document. I also worked on keeping records of our meetings and keeping things up to date with the deadlines. I attended all the meetings documented, and the very short undocumented meetings we had at the beginnign right after the class. I only missed one meeting because I was out of town for the Grace Hoppe Conference. Zackery and I were activly updating the progress with the project almost every weekend or twice a week. Because I haven't been able to help much with the coding the past month because of health conditions, and because of some lack of communication with the main programmer the progress of the project was slowed down alot.
   
**Zachery Lavalais**

   - Documentation
   - Testing

Aside from some information about OpenCV and a few suggestions, my contribution to the code was minimal. My main job was to be the documentarian as well as help with the testing and offer ideas for the project while Lance coded the main program and Shaikha coded and designed the UI. Along with that, I worked on the Software Requirements Specifications (SRS) document, the Software Design Document (SDD), the Software Testing Document (STD), as well as the Project Management Document. As stated above, my code contribution was only some slight help with the OpenCV implementation and not much else. I missed maybe one or two minor, undocumented meetings between Lance and Shaikha when I was out sick once. It was just a quick after class thing a couple of times, from what I hear from the two of them. 
   
**Programming Approach/Team Style**

   From the first day of development, we decided that the Egoless approach would make the most sense given the project and what we wanted it to do and how it should have worked. This is why Lance was the lead programmer as he had the best knowledge of both the language that we built the project on (C++) and the game that we were building the project around. (Picross)

   From there, Shaikha and Zackery were assigned to both the UI design and to test and document the project, respectively. Given Shaikha’s knowledge and experience with UI design and Zackery’s developmental plans and documentary abilities, this was also the best and choice outcome for the approach of the project. 
    
   Everyone offered and input their ideas on how the project should be built, what environment it should be built on, how it should work, etc. This is all something that the Egoless approach is keen on, so, we knew that for the project to progress successfully, that this is the style that we would have to use.
    
    


----
###7. Project Schedule

**Milestones**

   From the day of conception to the time we actually started to code and develop the project, we shifted our milestones around to fit best with what we found to be feasible and necessary. Our initial lead programmer had to drop the class about a month into the semester, so, we chose to not include those meetings and dates, but the ones that are relevant to the Picross Image Puzzle Generator project.
   
|Milestones|Date Started|Date Completed|Description|
|---|---|---|---|---|
|Cinceive new idea| 9/19/16 | 9/28/16 | Think of a new idea because Micael dropped the class  |
|Establish roles and goals| 9/28/16 | 9/30/16 | Assign our roles for the project and outline the purpose for making it  |
|Read up and understand the tools used for implementation| 9/30/16 | 10/2/16 | Familiarize ourselves with the tools that we’re going to use. (OpenCV, SFML, Visual Studio, etc.) |
|Reshape and form UI | 10/7/16 | 10/28/16 | List the requirements of the project as well as create a rough UI |
| Complete the SRS document | 10/8/16 | 10/15/16 | Finish and submit the Software Requirements Specification document |
| Base Solver class  | 9/30/16 | 10/26/16 | Complete the class Solver, allowing the program to solve a puzzle |
| Finalize and complete the UI design | 10/3/16 | 10/28/16 | Complete the class Solver, allowing the program to solve a puzzle |
| Complete the SDD | 10/3/16 | 11/2/16 | Finish and submit the Software Design Document |
| Work on integrating SFML and OpenCV | 11/2/16 | 11/29/16 | Tie up all of our code together and get the UI to respond with it |
| Solver and Hint system | 10/26/16 | 11/18/16 | Try to get the Solver to work with the Hint system. (Was not met) |
| Complete the STD | 11/17/16 | 11/19/16 | Finish and submit the Software Testing Document |
| Code for demo | 11/20/16 | 11/28/16 | Prepare and code for the final presentation demo |
| Finalize code | 11/30/16 | 12/1/16 | Completely finish and commit final code to GitHub, meet with TA for grading |




   
**Estimates**
 
![chart](https://s11.postimg.org/q5j95kb9v/chart.png)
 
**Schedule**


|Week Number |Date |Objective | Description|
|---|---|---|---|
|1 and 2 |  (9/16/16 - 9/30/16) | Conceive and confirm a new idea for the project and create roles | Make a new idea project that we all agree on and assign responsibilities |
|3 | (10/1/16 - 10/8/16) | Craft the initial UI design and start on SRS document  | Develop a UI that best fits what our program is to be used for. Make sure it’s easy to use and start on the SRS | 
|4 | (10/9/16 - 10/16/16) | SRS document completion and work on Solver class code | Finish the SRS and continue code work on the Solver class, which is the base of the project |
|5-7 | (10/17/16 -10/31/16) | Complete Solver class code and UI design and begin work on the SDD | Solver class is completed, so work begins on implementing other methods along with the completion of the UI design| 
|8 |  (11/1/16 - 11/8/16)| SDD completion. OpenCV and SFML integration. Work on Hint System | Complete and submit the SDD as well as begin work on SFML implementation. Figure out how OpenCV ties in and start code on the hint system |
| 9-11 | (11/9/16 - 11/21/16) | STD completion, hint system issues rework, and demo code | Finish and submit the STD and try to resolve the issues we ran into with the hint system. Begin hard coding |
| final weeks | -  | Demo Presentation and Finalization of code | Continue work on demo code as well as present it. Commit final code to GitHub for grading |


**Estimation Method**

* **PERT**

Pessimistic = 16 weeks (under detrimental circumstances)

Optimistic =  10 weeks (under advantageous circumstances)

Likely = 13 weeks (under completely normal circumstances, no setbacks)

Estimate = (p + 4*l + o)/6

Estimate = (16 +4(13) + 10)/6 =  13 weeks


* **Algorithmic Methods**

Walston/Felix Model: 5.25 * S^(.91) = PM

For our project, S is equivalent to approximately 2.5. As 2500 lines of code for the project equal 2.5 KLOC which equals S.

5.25 * 2.5^(.91) = 12 PM

Baily/Basili Model: 5.5 + 0.73S^(1.16) = PM

5.5 + .73(2.5^(1.16)) = 8 PM

So, by these models, if you divide the person months by the number of developers (3), you’ll find that the Walston/Felix model was accurate in the amount of time it predicted to develop our project. (Roughly 3-4 months)


----
###8. Meeting Summaries

![meeting1](https://s15.postimg.org/788d4kj0b/meeting1.png)

**Summary:** This was the first meeting that we had as a new group and we discussed several possible new ideas for a new project. What we decided on for the new initiative was something that Lance thought of while playing Picross and was the Picross Image Puzzle Generator. (PIPG) At this meeting, we discussed and outlined what we wanted from the project and what we wanted from each other. We established which structure the team would use while working on the project.


![meeting2](https://s17.postimg.org/ks9xbwpa7/meeting2.png)

**Summary:** There were a multitude of topics discussed at this meeting since it was the first one where we had a legitimate idea for a project. We decided that we were going to code the entirety of the project using C++ as well as outlined what exactly the needs of the project were. We needed to have something that solved the Picross puzzles as well as something that could import and export the files of the puzzles. A stretch goal we added was picture recognition.


![meeting3](https://s12.postimg.org/om33hn6x9/meeting3.png)

**Summary:** At this meeting we outlined and solidified what we wanted our requirements to be as well as began working on a UI to fit the mold of what we wanted. The requirements came out to be: User friendly (given we wanted it to be accessible to both children and adults), in C++ because that was the main programmer’s best language, the ability to import and export puzzles because that’s what the problem hinges on, and the ability to check if there’s a unique solution, which is important to a Picross puzzle.



![meeting4](https://s17.postimg.org/lvy311ozz/meeting4.png)

**Summary:** At this meeting, Shaikha and Zackery met after class and discussed and finished the SDD. Nothing was discussed about the project, all the time was spent working on the document. Lance missed because of prior plans.



![meeting5](https://s15.postimg.org/3qa77jvkr/meeting5.png)

**Summary:** We met shortly to discuss what our plan of action was going to be moving forward. There was still a lot of things that needed to be implemented and we had a quick discussion with Dr. Nash about how we should approach it.



![meeting6](https://s14.postimg.org/iuu7zs59d/meeting6.png)

**Summary:** We all met to work on the code for the demo before we had to present it. We tried to get all our files in order and all of our libraries implemented beforehand. We went over who had to speak on what part of the presentation as well as what we were going to show and how we were going to describe and explain our project concisely within the time duration.


![meeting7](https://s14.postimg.org/vvzx6tc5d/meeting7.png)

**Summary:** This one last meeting was to finish up and polish the code as best as possible as well as fix any issues that we were having. We got good amout of the things to work and build properly and the code to work the way we wanted it to going into the meeting with the TA. 

