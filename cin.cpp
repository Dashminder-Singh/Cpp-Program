#include <iostream>
using namespace std;

int main()
{
	int a=12,b=10;
	float f=2.5;
	char c='A';
	double d=3.56872;
	cout<<a<<endl;
	cout<<"Enter the new value (a): ";
	cin>>a;
	a=a+b;
	cout<<a<<" "<<c<<" "<<f<<" "<<d;
	return 0;

}