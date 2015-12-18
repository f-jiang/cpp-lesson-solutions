//============================================================================
// Name        : lesson2question2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>	// getline
using namespace std;

int main() {
	const string NAME = "John Cena";	// NAME is const because we don't want its value to change
	string guess;

	// do-while loops evaluate the condition (guess != NAME) after each loop iteration
	// while loops evaluate the condition before each loop iteration
	do {
		cout << "And his name is... ";
		getline(cin, guess);	// getline is used instead because cin can't extract whitespace from user input
	} while (guess != NAME);

	cout << "DA DADA DAAAAAAA";

	return 0;
}
