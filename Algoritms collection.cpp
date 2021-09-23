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
	#define N 10
	srand(time(NULL));
	int a[N];
	int n = sizeof(a) / sizeof(int);
	
	for (int i = 0; i < N-1; i++) {
		a[i] = (rand() % 100);
	}

	// print the UNsorted array
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	quicksort(a, 0, n - 1);

	// print the sorted array
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;

}