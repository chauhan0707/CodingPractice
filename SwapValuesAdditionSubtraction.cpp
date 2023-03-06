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
	a=a-b;
	b=a+b;
	a=b-a;
	cout<<"Swapped values of A and B:\n";
	cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
	return 0;
}
