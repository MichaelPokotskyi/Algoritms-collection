#pragma once
using namespace std;

/*
 `arr` ——> the input integer array to be sorted
   `n` ——> the length of the input array
   `k` ——> a number such that all integers are in range `0…k-1`
*/
void countsort(int arr[], int n, int k)
{
    // create an integer array of size `n` to store the sorted array
    int *output = new int [n];

    // create an integer array of size `k + 1`, initialized by all zero
    int *freq = new int [k + 1];
    memset(freq, 0, sizeof(freq));

    // 1. Using the value of each item in the input array as an index,
    // store each integer's count in `freq[]`
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // 2. Calculate the starting index for each integer
    int total = 0;
    for (int i = 0; i < k + 1; i++)
    {
        int oldCount = freq[i];
        freq[i] = total;
        total += oldCount;
    }

    // 3. Copy to the output array, preserving the order of inputs with equal keys
    for (int i = 0; i < n; i++)
    {
        output[freq[arr[i]]] = arr[i];
        freq[arr[i]]++;
    }

    // copy the output array back to the input array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}