//Name: Alyssa La Fleur
//Class: CS172
//Homework #4
//Problem: 11.9 Geometry: THe Rectangle2DClass 11.9
//Purpose:  A program wtih a class to create and answer questions relatign to area, perimeter, and the contents of rectangles

#include <iostream>
#include "Rectangle2D.h"
using namespace std;

//Testing Rectangle2D class
int main()
{
	Rectangle2D rects[3] =
	{
		Rectangle2D(2,2,4,4),
		Rectangle2D(2,2,2,2),
		Rectangle2D(4,4,2,2)
	};
	if (rects[0].contains(2, 2))
	{
		cout << "pass point test" << endl;
	}
	if (rects[0].contains(rects[1]))
	{
		cout << "pass contains rectangle test" << endl;
	}
	if (rects[0].overlaps(rects[2]))
	{
		cout << "pass overlap test for overlapping corners" << endl;
	}
	return 0;
}