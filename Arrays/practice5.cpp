// Count the number of positve integers of an array

#include <iostream>
using namespace std;

void count(int arr[])
{
	int count=0;
	for(int i=0; i<4; i++)
	{
		if(arr[i]>0)
		{
			count++;
		}
	}
	cout<<"No. of positve integers: "<<count;
}

int main()
{
	int arr[10];
	cout<<"Enter a positve integers: ";
	for(int i=0; i<4; i++)
	{
		cin>>arr[i];
	}
	count(arr);
	return 0;
}