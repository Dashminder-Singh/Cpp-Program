#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the values:"<<endl;
	cin>>a>>b>>c;

	if(a>b && a>c)
	{
		cout<<a<<" is Greater";
	}
	else if(b>c)
	{
		cout<<b<<" is Greater";
	}
	else
	{
		cout<<c<<" is Greater";
	}
	return 0;
}