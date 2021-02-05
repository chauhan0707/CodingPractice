#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	for(auto x:v)
	{
	
		cout<<x<<" ";
}
	return 0;
}

