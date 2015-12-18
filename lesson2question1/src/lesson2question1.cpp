//============================================================================
// Name        : lesson2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int number = 0;
	cin >> number;

	if (number % 2 == 0) {	// modulo operator: returns remainder from division
		cout << "number is even";
	} else {
		cout << "number is odd";
	}

	return 0;
}
