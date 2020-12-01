/* Malloc():- It stands for M/Y allocation.It takes the no. of bytes
			 to be allocated as an input & return a pointer of type-void.

		eg:	p=(int *)malloc(2 *sizeof(int));  space for 2 ints
*/

#include <iostream>
using namespace std;

int main()
{
	float a;  // sma- static M/Y loc
	float *p;

	//p=malloc(2);   // malloc has void-tye fn 

	p=(float *)malloc(4);
	//cout<<*p;   // it will take the garbage value by default

	*p=4.5;    // it assign the value into the block
	cout<<*p;
	return 0;
}