//============================================================================
// Name        : lesson2question4(challenge).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int height, row, column;

	cin >> height;

	for (row = 0; row < height; ++row) {
		for (column = 0; column < row + 1; ++column) {
			cout << '*';
		}

		cout << endl;
	}

	return 0;
}
