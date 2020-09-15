#include <iostream>
using namespace std;

void swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"X= "<<x<<" Y= "<<y<<endl;
}

int main()
{
	int a=5, b=10;
	cout<<"A= "<<a<<" B= "<<b<<endl;
	swap(a,b);
	return 0;
}