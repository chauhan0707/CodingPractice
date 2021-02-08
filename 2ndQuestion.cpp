#include<bits/stdc++.h>
using namespace std;
void getresult(int arr[] ,int n);
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	getresult(arr,n);
}
void getresult(int arr[],int n)
{
	int min=0,max=0;
	if(n==1)
	{
		min=max=arr[0];
	}
	if(arr[1]>arr[0])
	{
		max=arr[1];
		min=arr[0];
	}
	else
	{
		max=arr[0];
		min=arr[1];
	}
		for(int i=1;i<n;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
			else if(arr[i]<min)
			{
				min=arr[i];
			}
		}
	
	cout<<"Maximum element: "<<max<<endl;
	cout<<"Minimum element: "<<min;
}
