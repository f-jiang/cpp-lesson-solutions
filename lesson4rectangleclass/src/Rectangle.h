/*
 * Rectangle.h
 *
 *  Created on: Jan 10, 2016
 *      Author: feilan
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle {
private:
	float width, height;
	static int count;
public:
	Rectangle(float w, float h);

	float GetPerimeter();			  // returns rectangle perimeter
	float GetArea();				  // returns rectangle area
	void SetWidth(float w);			  // changes the rectangle’s width
	void SetHeight(float h);			  // changes the rectangle’s height
	void Resize(float w, float h); 		// hint: functions can call other functions
	bool HasSameArea(Rectangle rect); 	// compare two rects, check if equal area
	bool HasSamePerimeter(Rectangle rect);
	bool HasSameSize(Rectangle rect);	// same size = same area and perimeter
	static int GetCount();
};

#endif /* RECTANGLE_H_ */
