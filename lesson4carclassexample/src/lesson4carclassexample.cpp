//============================================================================
// Name        : lesson4carclassexample.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Car.h"	// this line tells us where to find the Car code
using namespace std;

int main() {
	Car civic(10000, 2010, "Honda Civic");
	Car q5(50000, 2015, "Audi Q5");
	cout << endl;

	civic.ShowInfo();
	q5.ShowInfo();
	cout << endl;

	civic.Accelerate();
	q5.Accelerate();
	cout << endl;

	Car::favourite = &civic;	// the "&" is an address-of operator (look it up)

	Car::favourite->ShowInfo();	// the "->" is an arrow operator (look it up) and is only used on pointers
	civic.favourite->ShowInfo();
	q5.favourite->ShowInfo();
	cout << endl;

	Car::favourite = &q5;

	Car::favourite->ShowInfo();
	civic.favourite->ShowInfo();
	q5.favourite->ShowInfo();

	return 0;
}
