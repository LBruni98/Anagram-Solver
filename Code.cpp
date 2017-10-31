/*
As a user, I would like to enter the Anagram
As a user, I would like the input to be stored
As a user, I would want a file of words to be read
As a user, I would want the input to be compared with the words
As a user, I would like to be informed of if there are word matches or not
As a user, I would like to view the available matching words
As a user, I would like to choose the correct word from the list of words
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string getWords() {
	string Dictionary[100];
	int WordNumber;
	
	ifstream inFile;
	inFile.open("Words - English Words 79K.csv");
	
	if(!inFile) {
		cerr << "There was an error trying to open the file";
		exit(1);
	}
	
	//STRING
	//LIBRARY STRING IN C++
	
	while (inFile >> Dictionary[100] >> WordNumber) {
		//Process the words and the numbers
	}
}

int main() {
	string words;
	char letters[3];
	
	cout << "Enter Anagram (Max: 3): ";
	cin >> letters;
	cout << "Your Anagram: " << letters;
	
	getWords();
	
	return 0;
}
