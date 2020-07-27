#include <iostream>
using namespace std;

float divison(int dividend,int divisor)
{
	float ans=(float)dividend/divisor;
	return ans;
}
int main()
{
	float dividend,divisor;
	cout<<"Enter Dividend: ";
	cin>>dividend;
	cout<<"Enter Divisor: ";
	cin>>divisor;

	cout<<dividend<<"/"<<divisor<<" = "<<divison(dividend,divisor)<<endl;

	return 0;
}