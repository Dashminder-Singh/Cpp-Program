#include <iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter the value of(n): ";
	cin>>n;

	for(i=2; i<n; i++)
	{
		cout<<i<<endl;
		if(n%i==0)
			break;
	}

	if(i==n)
		cout<<" Is a Prime No"<<endl;
	else
		cout<<"Not prime"<<endl;

	return 0;
}