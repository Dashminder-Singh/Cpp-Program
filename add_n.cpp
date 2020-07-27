#include <iostream>
using namespace std;

int main()
{
	int n,s=0,value;
	cout<<"Enter Integers: "<<endl;
	cin>>n;

	cout<<"Integers are: "<<n<<endl;
	for(int i=1; i<=n; i++)
	{
		cin>>value;
		s=s+value;
	}
	cout<<"Sum of Entered Integers: "<<s<<endl;
	return 0;
}