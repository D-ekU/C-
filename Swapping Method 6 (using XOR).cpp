#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	a=a^b;
	b=b^a;
	a=a^b;
	cout<<"\n-------------After swipe-------------\n\na="<<a<<" and b="<<b;
	return 0;
}
