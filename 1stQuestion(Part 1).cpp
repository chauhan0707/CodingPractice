// Iterative Approach; Time Complexity: O(N);
#include <bits/stdc++.h>
using namespace std;
/* Function to reverse arr[] from start to end*/
void revereseArray(char arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}     
 
/* Utility function to print an array */
void printArray(char arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
} 
 
/* Driver function to test above functions */
int main() 
{
    char arr[] = {'A', 'B', 'C', 'D', 'E','F'};
     
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout<<"Original Array:"<<endl;
    // To print original array 
    printArray(arr, n);
     
    // Function calling
    revereseArray(arr, 0, n-1);
     
    cout << "Reversed array is:" << endl;
     
    // To print the Reversed array
    printArray(arr, n);
     
    return 0;
}
