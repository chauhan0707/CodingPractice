#include<iostream>
using namespace std;
int main()
{
	int n,max,min,i;
	cout<<"Ener the size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the values: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<"Max value: "<<max<<endl<<"Min value: "<<min<<endl;
	return 0;
}
