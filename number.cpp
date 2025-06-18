#include <iostream>
#include <fstream>
#include <stdexcept>
#include "number.h"
using namespace std;


//pre: none
// post: read file and fill the array
void readFile(const std::string& filename, int arr[], int& size) {
    ifstream file("number.txt"); 
    while (file >> arr[size]) size++;
}

//pre: none
// post: print the array from the file read.
void printArray(const int arr[], int size) {
	for (int i = 0; i < size; i++) { // loop through the array
		cout << arr[i] << " "; // print each element
		if ((i + 1) % 10 == 0) cout << endl; // print a new line every 10 elements
    }
}

//pre: none
// post: search for a certain number and return its index, or -1 if not found
int search(const int arr[], int size, int num) {
	for (int i = 0; i < size; i++) // loop through the array
		if (arr[i] == num) return i; // if the number is found, return its index
    return -1; //else return -1
}

//pre: none
// post: modify the array at a given index with a new value
void modify(int arr[], int size, int index, int newVal) {
	if (index < 0 || index >= size) // check if index is valid
		throw out_of_range("Invalid index."); // throw an exception if not
	cout << "Old value: " << arr[index] << ", New value: " << newVal << endl;// print old and new values
	arr[index] = newVal; // modify the array at the given index
}

// pre: none
// post: add a number to the end of the array
void add(int arr[], int& size, int num) {
	if (size >= MAX_SIZE) // check if the array is full
		throw overflow_error("Array is full.");     // throw an exception if it is
	arr[size++] = num; // add the number to the end of the array and increment size
}

// pre: none
// post: remove a number at a given index and shift elements left
void removeAt(int arr[], int& size, int index) {
	if (index < 0 || index >= size) // check if index is valid
		throw out_of_range("Invalid index."); // throw an exception if not
	for (int i = index; i < size - 1; i++)	// shift elements left
		arr[i] = arr[i + 1]; // move each element to the left
	size--; // decrement size
}
