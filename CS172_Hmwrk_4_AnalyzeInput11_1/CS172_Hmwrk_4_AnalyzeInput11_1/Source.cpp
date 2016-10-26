//Name: Alyssa La Fleur
//Class: CS172
//Homework #4
//Prboblem: EX04_01
//Purpose: A program to create an array, read numbers into the array, compute the average, and find numbers over the average

#include<iostream>
using namespace std;

//Array to return pointer to array on heap for entered numbers, input of array size, output of array pointer
int * array_numbers(int size)
{
	//Creating array on heap, setting to pointer variable
	int * return_array = new int[size];
	return return_array;
}

//Function to fill array with entered numbers, input of array pointer, size of array, no output
void fill_array(int * array_numbers, int size)
{
	int input = 0;
	//For loop to fill array
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number" << endl;
		cin >> input;
		array_numbers[i] = input;
	}
}
\
//Function to find average of numbers in array, input of pointer to array on heap, size of array, output of average as a double
double array_avg(int * array_numbers, int size)
{
	int sum = 0;
	//Finding the sum of the array elements
	for (int i = 0; i < size; i++)
	{
		sum = sum + array_numbers[i];
	}
	//Computing and returning average
	double average = sum / static_cast<double>(size);
	return average;
}

//Function to find the number of elements in the array above the average, input of the pointer for the array, size of array, output of number of elements above the average
int number_above_avg(int * array_numbers, int size)
{
	int sum_greater = 0;
	//Finding average
	int avg = array_avg(array_numbers, size);
	//Loop to find elements above average
	for (int i = 0; i < size; i++)
	{
		//Counting the elements above the average
		if (array_numbers[i] > avg)
		{
			sum_greater++;
		}
	}
	//Returning the number of elements above the average
	return sum_greater;
}

//Main function to call all functions
int main()
{
	//Size entry for array from user
	int ar_size = 0;
	cout << "Enter array size: " << endl;
	cin >> ar_size;
	//Creating array on heap of correct size
	int* ar_numbers = array_numbers(ar_size);
	//Filling the array with numbers
	fill_array(ar_numbers, ar_size);
	//Finding the average of the array
	double avg = array_avg(ar_numbers, ar_size);
	//Finding the number above the average
	int numb_ab_avg = number_above_avg(ar_numbers, ar_size);
	//Outputting the found values
	cout << "The average is " << avg << " the number above the average is " << numb_ab_avg << endl;
	//Deleting the array on the heap
	delete [] ar_numbers;
	return 0;
}