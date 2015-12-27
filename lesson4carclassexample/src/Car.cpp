/*
 * Car.cpp
 *
 *  Created on:
 *      Author:
 */

#include "Car.h"	// refer back to the header file
#include <iostream>
using namespace std;

// the "Car::" means that the following items are part of the Car class

Car* Car::favourite = NULL;

Car::Car(int p, int y, string n): price(p), year(y), name(n) {
    cout << "You have a new " << name << endl;
};

void Car::Accelerate() {
	cout << "Accelerate the " << name << endl;
}

void Car::Brake() {
	cout << "Hit the brakes of the " << name << endl;
}

void Car::Turn() {
	cout << "Turn the " << name << endl;
}

void Car::ShowInfo() {
	cout << "Name: " << name << endl;
	cout << "Year: " << year << endl;
	cout << "Price: " << price << endl;
}
