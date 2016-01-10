/*
 * Rectangle.cpp
 *
 *  Created on: Jan 10, 2016
 *      Author: feilan
 */

#include "Rectangle.h"

// we start off with 0 Rectangles
// because Rectangle::count is static (see Rectangle.h), we define it here rather than in the constructor
// for static members, we only use the "static" keyword in the .h file
// i.e.: "static int Rectangle::count = 0;" would give us an error
int Rectangle::count = 0;

Rectangle::Rectangle(float w, float h): width(w), height(h) {
	// here, we don't need to type Rectangle::count because this function is a member of the class
	// therefore, we are "inside" the class
	++count;
}

float Rectangle::GetPerimeter() {
	return 2 * (width + height);
}

float Rectangle::GetArea() {
	return width * height;
}

void Rectangle::SetWidth(float w) {
	width = w;
}

void Rectangle::SetHeight(float h) {
	height = h;
}

void Rectangle::Resize(float w, float h) {
	SetWidth(w);
	SetHeight(h);
}

bool Rectangle::HasSameArea(Rectangle rect) {
	// "this" and "rect" are two different Rectangles
	// "this" is the Rectangle instance on which HasSameArea() is called
	return this->GetArea() == rect.GetArea();
}

bool Rectangle::HasSamePerimeter(Rectangle rect) {
	return this->GetPerimeter() == rect.GetPerimeter();
}

bool Rectangle::HasSameSize(Rectangle rect) {
	return this->HasSameArea(rect) && this->HasSamePerimeter(rect);

	/**	the above line achieves the same results as this snippet, but is more efficient:
	 *
	 *  bool hasSameArea = this->HasSameArea(rect);
	 * 	bool hasSamePerimeter = this->HasSamePerimeter(rect);
	 * 	bool hasSameSize;
	 *
	 *	// "&&" means to check if hasSameArea AND hasSamePerimeter are BOTH true
	 * 	if (hasSameArea && hasSamePerimeter) {
	 * 		hasSameSize = true;
	 * 	} else {
	 * 		hasSameSize = false;
	 * 	}
	 *
	 * 	return hasSameSize;
	 */
}

int Rectangle::GetCount() {
	return count;
}
