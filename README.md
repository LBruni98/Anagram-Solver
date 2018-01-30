# Anagram Solver
Project 003

## Table of Contents
1. Introduction
2. Development
3. Creation and Implementation
4. Research

## Introduction
This design document showcases the design, development and implementation of the anagram solver, along with the features and mechanics within the program.

#### Brief Introduction
This program is designed to take in the following anagram given by the user and through a list of words, find and give the user the correct solution

#### High-Level Description
Design a system that will allow the player to enter up to 3 random letters. The system will return the best, largest, valid English word that can be made up of the 3 letters(blanks/spaces are not allowed). For example: TCA should return CAT, OZR should return OR, ZZA should return A.

Required language: C++

## Development
#### User Stories
1. As a user, I would like to enter the Anagram
2. As a user, I would like the input to be stored
3. As a user, I would want a file of words to be read
4. As a user, I would want the input to be compared with the words
5. As a user, I would like to be informed of if there are word matches or not
6. As a user, I would like to view the available matching words

#### Development Timetable
| User Story | Task Description              | Points | Due Date |
| ---------- |------------------------------ | ------ | -------- |
| 1          | User input                    | 1      | 14/11    |
| 2          | Name storage                  | 1      | 14/11    |
| 3          | Opening and reading the file  | 2      | 15/11    |
| 4          | Comparing the words           | 3      | 15/11    |
| 5          | Notification of a word or not | 1      | 15/11    |
| 6          | Word output                   | 1      | 15/11    |

#### Use of Teamwork/Communication
The task asked for the planning to be carried out in groups and work is to be completed individually. Again, I helped with the user stories to help out with creating the project in the form of small tasks.

I also helped out with the file reading to one of the members of 'Reboot Games', where the `ifstream inFile;` function was needed to read all of the words in a file.

#### Flowchart

![Flowchart](https://github.com/LBruni98/Project-003/blob/master/Untitled%20Diagram.jpg)

Here is the main layout for what I'm trying to do. The flowchart shows that the program create the dictionary, store the input, compare with a dictionary and statements that plan to create specific letter inputs and if the word matches with the dictionary. The code will be written out in C++, mainly because of the requirements requesting for the program to be created in this language, but also the fact that the language is more object oriented, mainly because the prgram relies on storing data.

#### Evaluation
The program had carried out the tasks laid out in the flowchart and user stories and C++ had mangaed to carry out the functions with ease. C++ helps with being more data oriented as it helps with the methods included in the code and that its ease with reading files and using the file to help with word comparison. The language takes most of its roots from C making it compile well with the language and is fairly felxable and prior knowledge helps with the development of most of the functions, albeit the coding language is a tad difficult because of the slightly different syntax to learn.

## Creation and Implementation
#### Process of implementation
The way to successfully implement this algorithm is to go at the tasks individually and that way, the whole process is ordered and each task can be fully realized. Much of this is derived from the first project and will be basis for future projects as well as this.

The first step to creating the program is to plan out what the initial steps for development; outlining the user stories and creating flowcharts and pseudo-code of the program, generally to understand how it will work and its layout.

Next is to find the IDE and programming language applicable for the program; what will help with the development and what would best suit the program. The IDE chosen was repl.it being a simple IDE that has the capabilites of a common IDE.

Then would be to take the stories and create the program in accordance to the user stories laid out in planning. The program takes shape here as individual tasks, rather than approaching the program in a huge epic. Along with easier development through individual tasks, the user can also test every individual part for easier testing and can easily understand the structure of the code.

Finally comes to the execution. The project has two options of languages; C and C++. I chose C++ because of more familiarity with the code in the past.

Overall, the implementation of the code would be similar to the second project, but a little lacking with newer features to learn and more complex functions to be added such as the file reading. References down below helped with both the language and the features used in the program.

#### IDE
![IDE](https://github.com/LBruni98/Anagram-Solver/blob/master/Project%203%20-%20Proof%201.PNG)

The IDE used was [repl.it](https://repl.it/) which is an online IDE that covers numerous programming languages other than C++ and can help out immensely, such as the ability to create webpages with HTML. It was used for this task and helped with the development of the program, because it had the fundamentals of a common IDE such as syntax highlighting and is a code interpreter and can also the code can be directly link to the github account. Though the downsides were that this is more or less a simple IDE and some errors were hard to solve without the help of the internet, something that could've been easier with a proper IDE.

#### Coding Standards
Coding Standards are a set of guidelines for a developer to follow in order to create high quality code. These guidelines help a developer write in a specific way that best suits that language. It works because developers would have written in their own style when others would write their code in a different style; different indentation, naming of functions and commenting. If in a workplace environment, setting a standard for coders would help, so to improve readability of the code and helps with editing and modifying.

##### Evaluation
The coding standards in my project almost match what was stated above. I used this in order to make the code readable, not just to me, but also to other who want to read the lines of code, structuring the code in a way to show what does what and what is what. This project is more heavily reliant on each indentation in one particular function, so this is important for me to address if the code should remain readable. Comments are also a factor in the standards that I've used to give the user a clear idea of what each function or line in the code does. Whenever, I head back into this for reference, the standards that I have adopted will help with distinguishing the code to all people; members of the team, other programmers or myself.

#### Debugging
As Repl is considered an IDE, syntax errors are given out should the code terminate not as a zero or it crashes and the line number is given along with the description of the error, which helps out with rectifying the code. This helped me solve most of the errors that came up during development which is a step up considering the last project was created in notepad, a basic text editor which doesn't really qualify as an IDE. The only issue with Repl was that not all the errors were realized and solved because it lacked features and debugging tools seen in most IDEs, so the only way to solve the problem was to look it up via the internet or just rewrite portions of the code.

#### Development of Code
##### Reading the File and word comparison
The important aspect of the code would be the both the file being read and the comparison of words to solve the anagram. This is so that the word input can be matched via individual letters to a word and displayed to the user.

```cpp
  ifstream inFile;
	inFile.open("Words.txt");
```
The reading of the file by `infile` and the file that would be read consisting of 3 letter words.
```cpp
if(inFile.is_open()) { // If the file is open...
		while (inFile.good()) {//...and while the file is good
			getline(inFile, line); // Read the lines
			WordCounter = 0;
			for(int i=0; i<letters.length(); i++) {
				for(int j=0; j<line.length(); j++){
					if(letters[i] == line[j]){
         					WordCounter++;
         					//break;
         					if(WordCounter > MaxCounter){
     							result = line;
     							MaxCounter = WordCounter;
						}
         	}
				}
			}
		}
	}
```
The comparison here is carried out if the file is both open and good to be read as it gets a line. For loops are used to match the word via the letters in the input and the words in the file.

![Anagrams](https://github.com/LBruni98/Anagram-Solver/blob/master/Project%203%20-%20Proof%202.PNG)

Anagrams being solved.

## Research
* http://www.cplusplus.com/reference/fstream/ifstream/
* http://www.cplusplus.com/reference/fstream/ifstream/open/
* http://www.cplusplus.com/
* https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
