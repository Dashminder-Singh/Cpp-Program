#include <iostream>
using namespace std;

int main()
{
	int a=7;
	int *p=&a;
	int **q=&p;

	cout<<"a= "<<a<<" p= "<<p<<" q= "<<q<<" *p= "<<*p<<" *q= "<<*q<<" **q= "<<**q<<endl;

	return 0;
}