#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter value of A: ";
	cin>>a;
	cout<<"Enter value of B: ";
	cin>>b;
	cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"Swapped values of A and B:\n";
	cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
	return 0;
}
