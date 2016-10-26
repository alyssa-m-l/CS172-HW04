#ifndef COURSE_H
#define COURSE_H

#include<iostream>
using namespace std;

//Unless otherwise commented, all code is from book example class
class Course
{
private:
	string courseName;
	string * students;
	int numberOfStudents;
	int Capacity;
public:
	Course(const string & courseName, int capacity);
	~Course();
	Course(const Course & course);
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string * getStudents() const;
	int getNumberOfStudents() const;
	//Start new code
	//Function to clear all students from the course
	void clear();
};

#endif
