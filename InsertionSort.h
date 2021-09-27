#pragma once
using namespace std;


    // Function to perform insertion sort on `arr[]`
    void iterationInsertionSort(int arr[], int n)
{
    // start from the second element (the element at index 0
    // is already sorted)
    for (int i = 1; i < n; i++)
    {
        int value = arr[i];
        int j = i;

        // find index `j` within the sorted subset `arr[0…i-1]`
        // where element `arr[i]` belongs
        while (j > 0 && arr[j - 1] > value)
        {
            arr[j] = arr[j - 1];
            j--;
        }

        // note that the subarray `arr[j…i-1]` is shifted to
        // the right by one position, i.e., `arr[j+1…i]`

        arr[j] = value;
    }
}
    


        // Recursive function to perform insertion sort on subarray `arr[i…n]`
        void recursionInsertionSort(int arr[], int i, int n) {
                    int value = arr[i];
            int j = i;

            // find index `j` within the sorted subset `arr[0…i-1]`
            // where element `arr[i]` belongs
            while (j > 0 && arr[j - 1] > value)
            {
                arr[j] = arr[j - 1];
                j--;
            }

            arr[j] = value;

            // note that the subarray `arr[j…i-1]` is shifted to
            // the right by one position, i.e., `arr[j+1…i]`

            if (i + 1 <= n) {
                recursionInsertionSort(arr, i + 1, n);
            }
    }

    // Function to print `n` elements of array `arr`
    void printArray(int arr[], int n)
    {
        for (int i = 0; i < n; i++) {
            cout << arr[i];
        }
    }
