#
-----
# Software Testing Document
# For
# Picross Image Puzzle Generator 


**Version 1.0** | 
**November 19, 2016**

#

**Prepared by**
- Lance Lott
- Shaikha Al-Mashaykhi
- Zackery Lavalais


 
  



-----



| Test Case #: 0 | Test Case Name: Application Startup|
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: |
| Designed By: | Design Date: 11/20/2016 |
| Executed By: | Execution Date: |
| Short Description: test the application's startup|  |


|Pre-conditions| 
|---|
| The PC used to run the application is turned on |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| run application  | The title screen and main menu is displayed  |   |   |   |

|Post-condition | 
|---|
|The application is running |


#

| Test Case #: 1 | Test Case Name: Test the Scan button|
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: |
| Designed By: | Design Date: 11/20/2016 |
| Executed By: | Execution Date: |
| Short Description: test if the scan button works |  |

|Pre-conditions| 
|---|
| the application is running |
| the title and the main menu are displayed  |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| click on Scan button | the view changes and Scan view is displayed|   |   |   |

|Post-condition | 
|---|
| the Scan view is displayed |
| open, export, solve and back buttons are displayed |

#


| Test Case #: 2 | Test Case Name: test open button in the Scan view|
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: |
| Designed By: | Design Date: |
| Executed By: | Execution Date: |
| Short Description:  test the functionality of opening an image file from|  |


|Pre-conditions| 
|---|
| the scan view is displayed with its menu |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| click on open button | open image box pops up |   |   |   |

|Post-condition | 
|---|
| the open image box pops up |

#


| Test Case #: 3 | Test Case Name: test the export button |
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: |
| Designed By: | Design Date: 11/21/ 2016|
| Executed By: | Execution Date: |
| Short Description: test if the application exports puzzle file|  |


|Pre-conditions| 
|---|
| puzzle should be loaded |
| The system checks if it is a valid puzzle |
| The system converts image file to puzzle file |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| click on export button | the system opens window that prompts the user to select a file path|   |   |   |
|2| navigate to the location the user wants to save the file | select the file path   |   |   |   |
|3| the user names the puzzle file | the name of the file is changed |   |   |   |
|4| click on "save" file | the system saves the file on the path chosen  |   |   |   |

|Post-condition | 
|---|
| puzzle file saved on the location the user choose in PC |


#


| Test Case #: 4 | Test Case Name:  test the solve button |
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: |
| Designed By: | Design Date: 11/21/2016|
| Executed By: | Execution Date: |
| Short Description: to test the solving option|  |

|Pre-conditions| 
|---|
| valid puzzle loaded |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| click on the solve button | the solve view is displayed  |   |   |   |

|Post-condition | 
|---|
|  the solve view is displayed |

#

| Test Case #: 5 | Test Case Name: Test Give me hint button |
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: Menu |
| Designed By: | Design Date:11/21/2016 |
| Executed By: | Execution Date: |
| Short Description: Tests if the hint button works if clicked |  |


|Pre-conditions| 
|---|
| The application is running |
| The player is in the puzzle solver view |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| Clicking the "Create" button | The system displays the creation window |   |   |   |
|2| Clicking the "Solve" button | The system opens up to the solver window |   |   |   |
|3| Clicking the "Give Me a Hint" button | The system offers the user a hint for their next move |   |   |   |

|Post-condition | 
|---|
| A hint appears on the screen for the user to see. |


#

| Test Case #: 6 | Test Case Name: Test the Check button |
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: Menu |
| Designed By: | Design Date:11/21/2016 |
| Executed By: | Execution Date: |
| Short Description: Tests to see if the Check buttons works properly |  |


|Pre-conditions| 
|---|
| The application is running |
| The player is in the create puzzle view |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| Clicking the "Create" button | The system displays the creation window |   |   |   |
|2| Clicking the "Check" button | The system displays checks whether the puzzle that's created is a valid and unique puzzle |   |   |   |

|Post-condition | 
|---|
| A message appears for the user to either confirm validity or to tell them that the puzzle needs to be altered |


#

| Test Case #: 7| Test Case Name: Testing the Back buttons |
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: Menu |
| Designed By: | Design Date:11/21/2016 |
| Executed By: | Execution Date: |
| Short Description: Testing to make sure that all the back buttons work within the parameters we've set and return to their respective screens |  |


|Pre-conditions| 
|---|
| The application is running |
| The player is in any current view in the program |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1|  Clicking from the starting view to any available view | The system should respond based on what option the user selects |   |   |   |
|2|  Clicking on any of the "Back" buttons that are a part of the ui | The system should return you from any current view to the title and main menu view |   |   |   |

|Post-condition | 
|---|
| The system opens up the title and main menu view/the starting view |



#

| Test Case #: 8 | Test Case Name: Testing Exit |
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: Menu |
| Designed By: | Design Date:11/21/2016 |
| Executed By: | Execution Date: |
| Short Description: The program should exit or close when the user prompts it to do so.  |  |

|Pre-conditions| 
|---|
| The program is running and the user wishes to exit the program |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| The user presses the X button at the top right of the window | The screen proceeds to close |   |   |   |

|Post-condition | 
|---|
| The program is closed. |


#

| Test Case #: 8 | Test Case Name: test the about button |
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem:  |
| Designed By: | Design Date:11/21/2016 |
| Executed By: | Execution Date: |
| Short Description: to test if the about button on the title and main menu view works |  |


|Pre-conditions| 
|---|
| The application is running |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| click on about button | the about view is displayed  |   |   |   |

|Post-condition | 
|---|
| a brief summary about what Picross Image Puzzle Game is about is diplayed |
| team members introduction |


#

| Test Case #: 9 | Test Case Name: test for correct input size|
| --- | --- |
| System: Picross Image Puzzle Game  | Subsystem: Menu|
| Designed By: | Design Date:11/21/2016 |
| Executed By: | Execution Date: |
| Short Description: testing to make sure that the size of a puzzle being created is within our set puzzle parameters|  |

|Pre-conditions| 
|---|
| The applicaiton is running |
| the user clicked on create button|
| the user has input numbers into the size input boxes |

|Step|Action|Expected System Response|Pass/Fail|Comment|
|---|---|---|---|---|
|1| click on create button | find and input numbers into the designated boxes |   |   |   |

|Post-condition | 
|---|
| the sizes that the user inputs are valid and the user can proceeds making the puzzle |
| the size that the user inputs fall outside the set parametes and the user should consider revising them |




