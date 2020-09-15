#include <iostream>
using namespace std;

/*int main()
{
	int n, a=0, b=1, c;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<a<<endl;
	cout<<b<<endl;

	for(int i=2; i<n; i++)
	{
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
	}
	return 0;
}*/

int main()
{
	int arr[100],n;
	cout<<"Enter the value: "<<endl;
	cin>>n;
	arr[0]=0;
	cout<<arr[0]<<" ";
	arr[1]=1;
	cout<<arr[1]<<" ";

	for(int i=2; i<n; i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}