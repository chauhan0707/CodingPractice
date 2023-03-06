#include<iostream>
using namespace std;
int main()
{
	int sp,ep,i,sum=0;
	cout<<"Enter starting point: ";
	cin>>sp;
	cout<<"Enter ending point: ";
	cin>>ep;
	for(i=sp;i<=ep;i++)
	{
		sum=sum+i;
	}
	cout<<sum;
	return 0;
}
