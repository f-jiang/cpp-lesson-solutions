/*
 * Car.h
 *
 *  Created on:
 *      Author:
 */

#ifndef CAR_H_
#define CAR_H_

#include <string>
using namespace std;

class Car {
private:
    int price;
    int year;
    string name;

public:
    static Car* favourite;	//  the "*" makes favourite a pointer to Car (look up C++ pointers)

    Car(int p, int y, string n);

    void Accelerate();
    void Brake();
    void Turn();
    void ShowInfo();
};

#endif /* CAR_H_ */

