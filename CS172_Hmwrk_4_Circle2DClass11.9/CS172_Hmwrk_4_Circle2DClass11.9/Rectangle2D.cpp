#include<iostream>
#include "Rectangle2D.h"

//Default constructor for class
Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

//Constructor for class with inputs for all four variables
Rectangle2D::Rectangle2D(double xnew, double ynew, double widthnew, double heightnew)
{
	x = xnew;
	y = ynew;
	width = widthnew;
	height = heightnew;
}

//Getter for x
double Rectangle2D::getx() const
{
	return x;
}

//Setter for x value
void Rectangle2D::setx(double newx)
{
	x = newx;
}

//Getter for y
double Rectangle2D::gety() const
{
	return y;
}

//Setter for y
void Rectangle2D::sety( double newy) 
{
	y = newy;
}

//Getter for width
double Rectangle2D::getWidth() const
{
	return width;
}

//Setter for width
void Rectangle2D::setWidth(double newWidth) 
{
	width = newWidth;
}

//Getter for height
double Rectangle2D::getHeight() const
{
	return height;
}

//Setter for height
void Rectangle2D::setHeight(double newHeight)
{
	height = newHeight;
}

//Function to return area value, no inputs, output of area
double Rectangle2D::getArea() const
{
	//Calculate area
	double area = width * height;
	//Return area
	return area;
}

//Function to calculate perimeter, no inputs, output of perimeter
double Rectangle2D::getPerimenter() const
{
	//Calculate and return perimeter
	double perim = (width * 2) + (height * 2);
	return perim;
}

//Function to determine if a point is contained or not, input of point values, output of bool value
bool Rectangle2D::contains(double x, double y) const
{
	bool is_in = false;
	//Creating boundries to check against for the point
	double xbound_l = this->x - (width / 2.0);
	double xbound_h = this->x + (width / 2.0);
	double ybound_l = this->y - (height / 2.0);
	double ybound_h = this->y + (height / 2.0);
	//Checking if the point falls within the outerbounds of the rectanlge
	if (x > xbound_l && x < xbound_h)
	{
		if (y > ybound_l && y < ybound_h)
		{
			is_in = true;
		}
	}
	return is_in;
}

//Function to determine if a rectangle falls within anohter rectangle, input of rectangle, output of bool value
bool Rectangle2D::contains(const Rectangle2D &r) const
{
	bool is_in = false;
	//Creating boundries for rectangle to check against
	double xbound_l = this->x - (width / 2.0);
	double xbound_h = this->x + (width / 2.0);
	double ybound_l = this->y - (height / 2.0);
	double ybound_h = this->y + (height / 2.0);
	//Checking if the points for the rectanlge fall within the original rectangle
	if (r.x > xbound_l && r.x < xbound_h)
	{
		if (r.y > ybound_l && r.y < ybound_h)
		{
			is_in = true;
		}
	}
	return is_in;
}

//Checking if corners of rectangles overlap, as in problem example, input of rectanlge to check against, output of bool value
bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
	bool overlaps = false;
	double xleft = this->x - (this->width / 2.0);
	double xright = this->x + (this->width / 2.0);
	double yup = this->y + (this->height / 2.0);
	double ydown = this->y - (this->height / 2.0);
	double xdiffr = r.width / 2.0;
	double ydiffr = r.height / 2.0;
	double yupr = r.y + ydiffr;
	double ydownr = r.y - ydiffr;
	double xleftr = x - xdiffr;
	double xrightr = x + xdiffr;
	//Checking if any corners of rectangle r overlap with the rectangle
	if (this->contains(xleftr, yupr))
	{
		overlaps = true;
	}
	if (this->contains(xleftr, ydownr))
	{
		overlaps = true;

	}
	if (this->contains(xrightr, yupr))
	{
		overlaps = true;
	}
	if (this->contains(xrightr, ydownr))
	{
		overlaps = true;
	}
	return overlaps;
}
