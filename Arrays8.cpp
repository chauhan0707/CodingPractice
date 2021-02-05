#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int s=0;
	s=accumulate(arr,arr+n,s);
	cout<<s;
}
