//Name: Alyssa La Fleur
//Class CS172
//Homework #4
//Problem EX04_05
//Purpose:  Course class revision

#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

//Requested test program, creating a course, adding three students, dropping one, adn then displayign the students in the course
int main()
{
	const string courseName = "CS172";
	int testcourseCap = 3;
	Course testCourse(courseName, testcourseCap);
	testCourse.addStudent("One");
	testCourse.addStudent("Two");
	testCourse.addStudent("Three");
	testCourse.dropStudent("One");
	string * students = testCourse.getStudents();
	for (int i = 0; i < testCourse.getNumberOfStudents(); i++)
	{
		cout << students[i] << endl;
	}
	return 0;
}