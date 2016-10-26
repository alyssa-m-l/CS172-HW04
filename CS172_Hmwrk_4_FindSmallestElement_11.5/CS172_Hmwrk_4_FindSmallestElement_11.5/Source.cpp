//Name: Alyssa La Fleur
//Class: CS172
//Homework #4
//Problem EX04_03
//Purpose:  A program with a function using pointers to find the smallest element in an array of integers
#include<iostream>
using namespace std;

//Function to find the smallest element with poitners, input of pointer to array, size of array, output of smallest number
int findSmallest(int * arraytoSort, int size)
{
	//Declaring variable to be returned with first element in array
	int smallest = arraytoSort[0];
	//For loop to sort through array
	for (int i = 0; i < size; i++)
	{
		//If the element is less than the stored value, change the value to the element
		if (arraytoSort[i] < smallest)
		{
			smallest = arraytoSort[i];
		}
	}
	//Return smallest element
	return smallest;
}

//Test of function with given array
int main()
{
	int test[8] = { 1,2,4,5,10,100,2,-22 };
	int size = 8;
	int * testarray = test;
	//Using function to find smallest element
	int smallest = findSmallest(testarray, size);
	//Outputting the smallest element
	cout << "The smallest element is " << smallest << endl;
	return 0;
}