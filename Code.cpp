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

string getWords(string letters) {
	string line;
	string Dictionary; // Word Variable
	int WordCounter; // Number to signify the amount of characters in the word
  int MaxCounter; // The maximum amount of characters
  string result;

	// Opens the file to be read
	ifstream inFile;
	inFile.open("Words.txt");
	
	if(!inFile) { // If the file is not there , it returns a message...
		cerr << "The file could not be read. Invalid type or the file is missing.";
		exit(1); // ...and terminates the program with an error
	}
	
	if(inFile.is_open()) { // If the file is open...
		while (inFile.good()) {//...and while the file is good
			getline(inFile, line); // Read the lines
			WordCounter = 0;
			for(int i=0; i<letters.length(); i++) {
				for(int j=0; j<line.length(); j++){
					if(letters[i] == line[j]){
         		WordCounter++;
         		break;
         	}
				}
			}
			
			if(WordCounter > MaxCounter){
     			result = line;
     			MaxCounter = WordCounter;
				}
		}
	}
	//STRING
	//LIBRARY STRING IN C++
	inFile.close(); // When done it closes the file
	cout << "Result: " <<  result << endl;

}

int main() {
  string letters; // The user's input

while(true){
	
	  cout << "Enter Anagram (Max: 3):"; // 
		getline(cin, letters);
	
	while(letters.length()>3) { // If the input length is above three letters
		cout << "Too many characters in this input\n";
		cout << "Enter Anagram Again(Max: 3):"; // 
		getline(cin, letters);
	}
	
	 cout << "Your Anagram: " << letters << "\n" ;
	
		getWords(letters); // The words that appear will come from the function above
}
	return 0;
}
