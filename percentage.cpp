#include <iostream>
using namespace std;

int main()
{
	int s1,s2,s3,s4,s5,sum,total=500;
	float per;
	cout<<"Enter the marks: "<<endl;
	cin>>s1>>s2>>s3>>s4>>s5;

	sum=s1+s2+s3+s4+s5;
	cout<<"Sum: "<<sum<<endl;

	per=(sum*100)/500;
	cout<<"Percentage is: "<<per<<endl;

	return 0;
}