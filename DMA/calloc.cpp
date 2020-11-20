/*Calloc:- It stands for Continious allocation.It intialize 
		each M/Y block with a default value of 0.

	eg:	p=(int *)calloc(10 * sizeof(int))  allocates contagious space
											in M/Y for 10 blocks(int)
*/

#include <iostream>
using namespace std;

int main()
{
	int *p;  // sma

	p=(int *)calloc(5,2);
	//cout<<*p;   // by default value 0

	*(p+0)=34;  // p is pointing first block of address
	*(p+1)=50;	// *p is assin value only first block of address
	
	//*(p+2)=23;
	//*(p+3)=45;
	//*(p+4)=29;
	cout<<*p;

/*	for(int i=0; i<5; i++)
	{
		cout<<*(p+i)<<endl;
	} 
	*/

	return 0;
}