// Algoritms collection.cpp : 

using namespace std;

#include <iostream>
#include "BinarySearch.h"
#include "MergeSort.h"


int main()
{
    int nums[]{ 2, 5, 7, 9, 10, 14, 21, 32, 36, 41, 50 }; // given array 10 elements
    int target_1{ 50 }; // target TRUE
    int target_2{ 12 }; // target FALSE

    int length = sizeof(nums) / sizeof(int); // array length calc
    int low{ 0 }, high = length - 1; // search space - all array

    cout << BinarySearchIteraive(nums, length, target_1);
    cout << "\n------------------------------------\n";
    cout << BinarySearchRecursive(nums, low, high, target_1);
    //Iterative returns 0 or -1 if TRUE or FALSE, 
    //recursive implementation returns index if found element and -1 if not.
}

