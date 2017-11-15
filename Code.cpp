#include <iostream>
#include <fstream>
#include <string>

/*
As a user, I would like to enter the Anagram
As a user, I would like the input to be stored
As a user, I would want a file of words to be read
As a user, I would want the input to be compared with the words
As a user, I would like to be informed of if there are word matches or not
As a user, I would like to view the available matching words
As a user, I would like to choose the correct word from the list of words
*/

using namespace std;

string getWords(string letter) {
	string line;
	string Dictionary; // Word Variable
	int WordCounter; // Number to signify the amount of characters in the word
  int MaxCoumter;
  string result;

	// Opens the file to be read
	ifstream inFile;
	inFile.open("Words.csv");
	
	if(!inFile) { // If the file is not there , it returns a message...
		cerr << "The file could not be read. Invalid type or the file is missing.";
		exit(1); // ...and terminates the program with an error
	}
	
	if(inFile.is_open()) { // If the file is open...
			while (inFile.good()) {//...and while the file is good
				getline(inFile, line); // Read the lines
				
				for(int i=0; i<3; i++){
					WordCounter = 0;
         		for(int j=0; j<line.length();j++){
         			if(letter[i] == line[j]){
         				WordCounter++;
         				break;
         			}
         		}
         		
         		if(WordCounter > MaxCoumter){
         				result = line;
         				MaxCoumter = WordCounter;
         			}
				}
			}
		}
	//STRING
	//LIBRARY STRING IN C++
	inFile.close(); // When done it closes the file
	cout << "Result: " <<  result;

}

int main() {
	string letters; // The user's input
	
	while(letters.length()<=3) { // If the input length is under three letters, we continue
		cout << "Enter Anagram (Max: 3):"; // 
		getline(cin, letters);
		cout << "Your Anagram: " << letters << "\n" ;
		
		getWords(letters); // The words that appear will come from the function above
	}
	return 0;
}
