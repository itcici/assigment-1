#pragma once
#include <string>

const int MAX_SIZE = 200; // Maximum size of the array

// pre: none
//post: read file 
void readFile(const std::string& filename, int arr[], int& size);

//pre:
//post: print the array from the file read.
void printArray(const int arr[], int size);

//pre: none
//post: search for a certain index and print it
int search(const int arr[], int size, int num);

//pre:none
//post:modify the array if asked and print it
void modify(int arr[], int size, int index, int newVal);

// pre: none
// post: add a number at certain index and print
void add(int arr[], int& size, int num);

//pre: none
//post: remove a certian number at certain index and print
void removeAt(int arr[], int& size, int index);

