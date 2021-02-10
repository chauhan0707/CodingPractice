#include<bits/stdc++.h>
using namespace std;
void sortarr(int arr[],int n)
{
     int lo=0;
	 int mid=0;
	 int hi=n-1;
	 while (mid <= hi) { 
        switch (arr[mid]) { 
  
        // If the element is 0 
        case 0: 
            swap(arr[lo++], arr[mid++]); 
            break; 
  
        // If the element is 1 . 
        case 1: 
            mid++; 
            break; 
  
        // If the element is 2 
        case 2: 
            swap(arr[mid], arr[hi--]); 
            break; 
        } 
    } 
}
void printarr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[]={1,0,0,0,2,2,1,1,1,1,2,2,2,0,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	sortarr(arr,n);
	cout<<"Array after segregation: "<<endl;
	printarr(arr,n);
	return 0;
}
