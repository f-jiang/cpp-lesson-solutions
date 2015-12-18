//============================================================================
// Name        : functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

// question 1
void Hello(string name) {
	cout << "Hello " << name;
}

// question 2
float GetTriangleArea(float base, float height) {
	return (base * height) / 2;
}

// question 3
float GetAmount(int n) {
	float pay = 0.01;
	float total = 0.0;

	for (int d = 0; d < n; ++d) {
		total += pay;
		pay *= 2;
	}

	return total;
}

int main() {
	// question 1
	Hello("JOHN CENA DA DADA DAAAAAAA");	// i swear this wasn't me

	// question 2
	int b = 4;
	int h = 5;
	cout << endl << GetTriangleArea(b, h) << endl;

	// question 3
	for (int d = 0; d < 20; ++d) {
		cout << "After " << d << " days, you will have $" << GetAmount(d) << endl;
	}

}
