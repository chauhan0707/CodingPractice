#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=*max_element(arr,arr+n);
	cout<<res;
}
