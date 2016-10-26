
#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H
#include <iostream>
using namespace std;

class Rectangle2D
{
	//Private double variables for class
private:
	double x;
	double y;
	double width;
	double height;
	//Public functions for class
public:
	//No arg and arg constructor for class
	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	//Getters and setters for x
	double getx() const;
	void setx(double newx);
	//Getters and setters for y
	double gety() const;
	void sety(double newy);
	//Getters and setters for width
	double getWidth() const;
	void setWidth(double newWidth);
	//Getters and setters for height
	double getHeight() const;
	void setHeight(double newHeight);
	//Funciton to return area value
	double getArea() const;
	//Function to return perimeter value
	double getPerimenter() const;
	//Function to return if a given point is contained in a rectangle
	bool contains(double x, double y) const;
	//Function to return if a given rectangle is contained in another
	bool contains(const Rectangle2D &r) const;
	//Function to determine if a given rectangle overlaps with another rectangle
	bool overlaps(const Rectangle2D &r) const;
};
#endif
