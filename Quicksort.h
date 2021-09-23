#pragma once
using namespace std;

/*
Given an integer array, sort it using the QUicksort algorithm.
*/

int partition(int a[], int start, int end)
{
    // Pick the rightmost element as a pivot from the array
    int pivot = a[end];

    // elements less than the pivot will be pushed to the left of `pIndex`
    // elements more than the pivot will be pushed to the right of `pIndex`
    // equal elements can go either way
    int pIndex = start;

    // each time we find an element less than or equal to the pivot, `pIndex`
    // is incremented, and that element would be placed before the pivot.
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }

    // swap `pIndex` with pivot
    swap(a[pIndex], a[end]);

    // return `pIndex` (index of the pivot element)
    return pIndex;
}

// Quicksort routine
void quicksort(int a[], int start, int end)
{
    // base condition
    if (start >= end) {
        return;
    }

    // rearrange elements across pivot
    int pivot = partition(a, start, end);

    // recur on subarray containing elements that are less than the pivot
    quicksort(a, start, pivot - 1);

    // recur on subarray containing elements that are more than the pivot
    quicksort(a, pivot + 1, end);
}