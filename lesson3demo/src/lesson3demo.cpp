//============================================================================
// Name        : lesson3demo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

/**
 * parameters (x1, y1, x2, and y2) are const because we don't want to change the points' positions
 * the "&" means to "pass by reference"
 */
float GetDistance(const float& x1, const float& y1, const float& x2, const float& y2) {
	// distance formula
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
	float x1 = 0.0, y1 = 5.0;
	float x2 = 78.0, y2 = -5.0;
	float x3 = -4.0, y3 = -7.0;
	float x4 = -34.0, y4 = 3.0;
	float dist[6];	// this is an array

	// without functions
	dist[0] = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));	// between points 1 and 2
	dist[1] = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));	// between points 1 and 3
	dist[2] = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));	// between points 1 and 4
	dist[3] = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));	// between points 2 and 3
	dist[4] = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));	// between points 2 and 4
	dist[5] = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));	// between points 3 and 4

	// with functions
	dist[0] = GetDistance(x1, y1, x2, y2);	// same calculations as before
	dist[1] = GetDistance(x1, y1, 45, y3);
	dist[2] = GetDistance(x1, y1, x4, y4);
	dist[3] = GetDistance(x2, y2, x3, y3);
	dist[4] = GetDistance(x2, y2, x4, y4);
	dist[5] = GetDistance(x3, y3, x4, y4);

	// print the distances
	for (int i = 0; i < 6; ++i) {
		cout << "Distance " << i + 1 << ": " << dist[i] << endl;
	}

	return 0;
}
