#include <iostream>
using namespace std;

int main()
{
	int n,s=0,value;
	cout<<"Enter how many integer: "<<endl;
	cin>>n;

	cout<<"Enter the "<<n<<" integers:"<<endl;
	for(int i=1; i<=n; i++)
	{
		cin>>value;
		s=s+value;
	}
	cout<<"Sum of entered integers: "<<s<<endl;
	return 0;
}