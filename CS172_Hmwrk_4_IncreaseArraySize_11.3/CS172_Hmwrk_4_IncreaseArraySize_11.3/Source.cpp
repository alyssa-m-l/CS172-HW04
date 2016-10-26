//Name: Alyssa La Fleur
//Class: CS172
//Homework #4
//Problem: EX04_02
//Purpose:  A function to double the capacity of an array

#include<iostream>
using namespace std;

int * doubleCapacity(const int * list, int size)
{
	//Creating new size
	int double_size = (size * 2);
	//Creating new array on heap twice the size of the previous array
	int * larger_array = new int[double_size];
	//Filling array with old values
	for (int i = 0; i < size; i++)
	{
		larger_array[i] = list[i];
	}
	//Filling the rest of the array with zeroes
	for (int j = size; j < double_size; j++)
	{
		larger_array[j] = 0;
	}
	//Returning pointer to new array
	return larger_array;
}


//Demonstrating function in main with list of 1, 2, 3
int main()
{
	//Creating demo list, and pointer to list
	int list_values[3] = { 1, 2, 3 };
	int size = 3;
	const int * list = list_values;
	cout << "The old value are: " << list[0] << " " << list[1] << " " << list[2] << endl;
	//Calling function
	int * double_list = doubleCapacity(list, size);
	cout << "The new values are: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << " " << double_list[i] << " ";
	}
	cout << endl;
	//Deleting array created
	delete[] double_list;
	return 0;
}