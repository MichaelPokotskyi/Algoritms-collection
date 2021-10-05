// Algoritms collection.cpp : 

using namespace std;

#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "BinarySearch.h"
#include "MergeSort.h"
#include "Quicksort.h"
#include "Euclid.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "CountingSort.h"


int main()
{
	/*
	Given a sorted array of n integers and a target value,
	determine if the target exists in the array in logarithmic time using
	the binary search algorithm. If target exists in the array,
	print the index of it.
	*/
	/*
	int nums[]{ 2, 5, 7, 9, 10, 14, 21, 32, 36, 41, 50 }; // given array 10 elements
	int target_1{ 50 }; // target TRUE
	int target_2{ 12 }; // target FALSE

	int length = sizeof(nums) / sizeof(int); // array length calc
	int low{ 0 }, high = length - 1; // search space - all array

	cout << BinarySearchIteraive(nums, length, target_1);
	cout << "\n------------------------------------\n";
	cout << BinarySearchRecursive(nums, low, high, target_1);
	cout << endl;
	//Iterative returns 0 or -1 if TRUE or FALSE, 
	//recursive implementation returns index if found element and -1 if not.
	*/

	/*
	* Given an integer array, sort it using the merge sort algorithm.
	*/
	/*
	#define N 15
	int arr[N], aux[N];
	srand(time(NULL));

	// generate random input of integers
	for (int i = 0; i < N; i++) {
		aux[i] = arr[i] = (rand() % 100) - 50;
	}

	// sort array `arr` using auxiliary array `aux`
	mergesort(arr, aux, 0, N - 1);

	if (isSorted(arr))
	{
		for (int i = 0; i < N; i++) {
			cout << arr[i];
		}
	}
	*/

	/*
	Given an integer array, sort it using the QUicksort algorithm.
	*/
	//#define N 10
	//srand(time(NULL));
	//int a[N];
	/*int a[] = { -3, 9, 5, 2, 6, 8, -6, 1, 3 };
	int n = sizeof(a) / sizeof(int);
	
	//for (int i = 0; i < n - 1; i++) {
	//	a[i] = (rand() % 100);
	//}

	// print the UNsorted array
	for (int i = 0; i < n - 1; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	quicksort(a, 0, n - 1);

	// print the sorted array
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;*/

	/*
	Euclid’s algorithm (or Euclidean algorithm) is a method for efficiently 
	finding the greatest common divisor (GCD) of two numbers. 
	The GCD of two integers, X and Y, is the largest number that divides 
	both X and Y without leaving a remainder.

	The Euclidean algorithm is based on the principle that the greatest common 
	divisor of two numbers does not change if the larger number is replaced 
	by its difference with the smaller number.

	*/
	//cout << euclidIteration(50, 20) << endl;
	//cout << euclidRecursion(20, 50) << endl;


	/* 
	Given an integer array sort it using the insertion algorithm 
	*/
	/*
	int arr[] = { 3, 8, 5, 4, 1, 9, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// start from the second element (the element at index 0
	// is already sorted)
	recursionInsertionSort(arr, 1, n - 1);
	// print the sorted array
	printArray(arr, n);

	iterationInsertionSort(arr, n);
	// print the sorted array
	printArray(arr, n);
	*/

	/*
	Given an integer array sort it using the selection sort algorithm
	*/
	/*
	int arr[] = { 3, 5, 8, 4, 1, 9, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);
	printArray(arr, n);
	*/
	
	/*
	Given a collection of N items, 
	each of which has a non-negative integer key whose maximum value is at most k, 
	effectivley sort it using the counting sort algorithm.
	*/

	int arr[] = { 4, 2, 10, 10, 1, 4, 2, 1, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// range of array elements
	int k = 10;
	countsort(arr, n, k);
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}

}