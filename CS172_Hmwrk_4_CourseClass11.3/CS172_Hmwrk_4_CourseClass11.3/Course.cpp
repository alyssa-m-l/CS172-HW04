#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

//Unless otherwise commeneted, all content from book


Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->Capacity = capacity;
	students = new string[capacity];
}

Course:: ~Course()
{
	delete[] students;
}

//Implement copy construct for class
Course::Course(const Course& course)
{
	//Setting all non pointer variables to new course objects variables
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	Capacity = course.Capacity;
	//Creating new array for pointer variable
	students = new string[Capacity];
}

string Course::getCourseName() const
{
	return courseName;
}

//Added array capactiy increase if adding a new students goes over the course capacity
void Course::addStudent(const string & name)
{
	int newStud = numberOfStudents + 1;
	//Checks if the course is at capacity, if so, increases array size
	if (newStud> Capacity)
	{
		//Declaring new array
		string * newarray = new string[Capacity * 2];
		//Initializing new array
		for (int i = 0; i < numberOfStudents; i++)
		{
			newarray[i] = students[i];
		}
		newarray[newStud] = name;
		//Deleting old array values
		delete[] students;
		//Initializing old array to new array 
		this->students = newarray;
		numberOfStudents = newStud;
		Capacity = Capacity * 2;
	}
	//Other case, for course not at capacity
	else
	{
		students[numberOfStudents] = name;
	}
	//increasing number of students
	numberOfStudents++;
}

//New code
//Completed drop student implementation
void Course::dropStudent(const string & name)
{
	//Checks if student is in course
	for (int i = 0; i < numberOfStudents; i++)
	{
		//if students is in course, finds when the student is in the array
		if (this->students[i] == name)
		{
			//Creates new array with one less student
			string * newarray = new string[numberOfStudents - 1];
			//Fills new array
			for (int j = 0; j < numberOfStudents - 1; j++)
			{
				//Fills new array with previous names
				if (j < i)
				{
					newarray[j] = this->students[j];
				}
				//Fills new array with names past the name of interest
				if (j == i || j > i)
				{
					newarray[j] = this->students[j + 1];
				}
			}
			//Decrements the number of students
			numberOfStudents--;
			//Deletes the old array
			delete [] this->students;
			//Sets old array to new array
			this->students = newarray;
		}
	}
}

string * Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

//Function to remove all students from a course, setting all student values back to then emptry string and resettign the student count to 0
void Course::clear()
{
	//Setting all students to the empty string
	for (int i = 0; i < numberOfStudents; i++)
	{
		students[i] = "";
	}
	//Setting number of students to 0
	numberOfStudents = 0;
}