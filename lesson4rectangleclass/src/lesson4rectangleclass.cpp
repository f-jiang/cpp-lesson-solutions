//============================================================================
// Name        : lesson4rectangleclass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
	Rectangle myRect(4, 5);
	Rectangle otherRect(20, 1);
	Rectangle anotherRect(3, 6);
	Rectangle rectangle(5, 4);

	// on the console, true is printed as 1 and false as 0
	cout << "myRect and otherRect same area: " << myRect.HasSameArea(otherRect) << endl;
	cout << "myRect and anotherRect same area: " << myRect.HasSameArea(anotherRect) << endl;
	cout << "anotherRect and myRect same perimeter: " << anotherRect.HasSamePerimeter(myRect) << endl;
	cout << "rectangle and myRect same size: " << rectangle.HasSameSize(myRect) << endl;
	cout << "myRect and otherRect same size: " << myRect.HasSameSize(otherRect) << endl;
	cout << "there are " << Rectangle::GetCount() << " Rectangles in this program";

	return 0;
}
