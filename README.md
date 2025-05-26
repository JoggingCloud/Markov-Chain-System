![image](https://github.com/user-attachments/assets/9aaa5f4e-50ad-434e-856a-8cec69eb25e8)
About
---------------------------------------------------------------------------------------------
My Markov system is a custom-built text generation tool I created to simulate conversational dialogue using probabilistic modeling. It reads in a dataset, breaks down the structure of sentences, and builds a transition matrix that learns how words follow each other. Depending on the order you choose, it can generate coherent responses by chaining words based on learned probabilities, moving either forward or backward. I built it to support different topics, store entire conversations, and allow users to resume sessions later, so it’s more than just a sentence generator; it remembers context. Everything runs through my in-game dev console, where I can test responses, tweak generation settings, and even control how immersive or memory-driven each conversation is.

How To Use
---------------------------------------------------------------------------------------------
The Keyboard Controls:
1.	Tilde key to open and close the dev console
2.	Type with keyboard 
3.	Type “Help” in the Dev console to see options if you need help
4.	Type which topic you would like to indulge in 
5.	Once you’ve picked a topic, the system will load data about that topic which should take about a second. Once that’s done you can type either “generate forward" or "generatebackward” and the system will generate a statement based on the chosen topic
6.	After each statement the system will ask if you would like to continue you can type either “yes” to continue or “no” to stop the session and chose a new topic 
7.	If you close the program and relaunch, you can choose to reload the last session by typing “loadsession topic=’Name of topic you want to load’” From there you can continue from where you left off
8.	The system also offer other features such as changing the order, your user name which changes how it greets you, response length, etc… That all has to be done before you load a topic
9.	If you change the order to 2,3 or 4 then you can only generateforward. 

How To Run Application
---------------------------------------------------------------------------------------------
Before anything you must have the Navisyn-Engine already downloaded as this won't run without it. It must also be in the same file path as this project.
Method A:
1.	Extract the zip folder to your desired location
2.	Open the following path --> …\DFS2MarkovChains\Run
3.	Double-click DFS2MarkovChains_Release_x64.exe to start the program
   
Method B:
1.	Extract the zip folder to you desired location.
2.	Open the following path --> …\Protogame3D
3.	Open the DFS2MarkovChains.sln using Visual Studio 2022 and make sure the solution config and platforms are "Release" and "x64".
4.	Press F6 key to build solution or go to Build --> Build Solution option using the Menu bar.
5.	Press Ctrl + F5 key to start the program without debugging or go to Debug --> Start without Debugging option using the Menu bar.
  NOTE:	
	  * Visual Studio 2022 must be installed on the system.
	  * In step 5 mentioned above, if you want you can execute the program with      the debugger too.
