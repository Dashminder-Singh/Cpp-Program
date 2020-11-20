#include <iostream>
using namespace std;

void wrong_swap(int a, int b) //pass by value
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swap(int *a, int *b)   //pass by pointer (or ref)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a=4, b=7;
	cout<<"The value of a and b, Before swap: "<<a<<" "<<b<<endl;
	//wrong_swap(a,b);  will not work due to call by value
	//swap(&a,&b);
	swap(a,b); // will work due to call by ref
	cout<<"The value of a and b, after swap: "<<a<<" "<<b<<endl;
	return 0;
}