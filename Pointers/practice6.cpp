/* print the address of i, 
pass this variable to a fn & print its address.
Are these address same?why?
*/
#include <iostream>
using namespace std;

void address(int a)
{
	cout<<"The address of a is: "<<&a<<endl;
}

int main()
{
	int i=4;

	cout<<"The value of i is: "<<i<<endl;
	address(i);
	cout<<"The address of i is: "<<&i;
	return 0;
}