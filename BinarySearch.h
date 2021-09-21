#pragma once
using namespace std;

/*
Given a sorted array of n integers and a target value, 
determine if the target exists in the array in logarithmic time using 
the binary search algorithm. If target exists in the array, 
print the index of it.
*/




int BinarySearchIteraive(int nums[], int length, int target) // O(1)
{
	int low{ 0 }, high = length - 1;
	while (low <= high) {
		int mid = (low + high) / 2; // middle index of the of the array
		if (target == nums[mid]) {
			return 0;
		}
		else if (target < nums[mid]) {
			high = mid - 1;
		}
		else { 
			low = mid + 1; 
		}
	}
	return -1;
}


int BinarySearchRecursive(int nums[], int low, int high, int target) // O(log N)
{
	if (low > high) {
		return -1; 
	}
	int mid = (low + high) / 2;
	if (target == nums[mid]) {
		return mid;
	}
	else if (target < nums[mid]) {
		return BinarySearchRecursive(nums, low, mid - 1, target);
	}
	else { 
		return BinarySearchRecursive(nums, mid + 1, high, target); 
	}
}
