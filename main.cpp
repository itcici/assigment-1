#include <iostream>
#include "number.h"
#include <fstream>
#include <stdexcept>

using namespace std;

int main() {
	int arr[MAX_SIZE]; // Array to hold numbers
	int size = 0; // Current size of the array

    //read info from "number.txt"  file and print array
    readFile("numbers.txt", arr, size); 
    cout << "Initial Array:\n"; 
    printArray(arr, size);

	int num, index; // Number to search, modify, add, or remove

    // Search for certain number and print the index 
    cout << "\nSearch for number: ";
    cin >> num;
    index = search(arr, size, num);
    if (index != -1) cout << num << " found at index " << index << endl;
    else cout << num << " not found.\n"; // print if number not found within array

	// Modify the array at a certain index
	// try to modify the array at a certain index
    try {
        cout << "\nIndex to modify: ";
        cin >> index;
        cout << "New value: ";
        cin >> num;
        modify(arr, size, index, num);
    } 
	// catch any exceptions that may occur and print the error message
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }

	// Add a number to the array
	//try to add a number to the array
    try {
        cout << "\nNumber to add: ";
        cin >> num;
        add(arr, size, num);
    } 
	//catch any exceptions that may occur and print the error message
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }

	// Remove a number at a certain index
	// try to remove a number at a certain index
    try {
        cout << "\nIndex to remove: ";
        cin >> index;
        removeAt(arr, size, index);
    } 
	//catch any exceptions that may occur and print the error message
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    // print out the final array after all the modification done above
    cout << "\nUpdated Array:\n";
    printArray(arr, size);

    return 0;
}
