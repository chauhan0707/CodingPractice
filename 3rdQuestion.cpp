// Simple C++ program to find k'th smallest element
//O(N Log N) 
#include<bits/stdc++.h>
using namespace std;

// Function to return k'th smallest element in a given array
int kthsmallest(int arr[], int n, int k)
{
	// Sort the given array
	sort(arr, arr + n);

	// Return k'th element in the sorted array
	return arr[k - 1];
}

// Driver program to test above methods
int main()
{
	int arr[] = {6,2,7,4,5};
	int n = sizeof(arr) / sizeof(arr[0]), k = 2;
	cout << "K'th smallest element is " << kthsmallest(arr, n, k);
	return 0;
}

