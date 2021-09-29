#pragma once
using namespace std;

#include <stdio.h>

/*
Given an integer array sort it using the selection sort algorithm
*/

// Utility function to swap values at two indices in an array
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Function to perform selection sort on `arr[]`
void selectionSort(int arr[], int n)
{
    // run `n-1` times
    for (int i = 0; i < n - 1; i++)
    {
        // find the minimum element in the unsorted subarray `[i…n-1]`
        // and swap it with `arr[i]`
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            // if `arr[j]` is less, then it is the new minimum
            if (arr[j] < arr[min]) {
                min = j;    // update the index of minimum element
            }
        }

        // swap the minimum element in subarray `arr[i…n-1]` with `arr[i]`
        swap(arr, min, i);
    }
}