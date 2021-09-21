// Algoritms collection.cpp : 



#include <iostream>
#include "BinarySearch.h"
using namespace std;

int main()
{
    int nums[]{ 2, 5, 7, 9, 10, 14, 21, 32, 36, 41, 50 }; // given array 10
    int target_1{ 50 }; // target TRUE
    int target_2{ 12 }; // target FALSE

    int length = sizeof(nums) / sizeof(int); // array length calc
    int low{ 0 }, high = length - 1; // search space - all array

    cout << BinarySearchIteraive(nums, length, target_1);
    cout << "\n------------------------------------\n";
    cout << BinarySearchRecursive(nums, low, high, target_1);
    
}

