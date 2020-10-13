#include <iostream>
using namespace std;

int main()
{
	int arr[20],n;
	cout<<"Enter Integers: ";
	cin>>n;
	cout<<"Enter the "<<n<<" Integers: ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	for(int i=n-1; i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}