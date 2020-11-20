/*Realloc:-It is used to allocate M/Y of new size, using 
			the previous pointer and size.
			eg: q=(int *)realloc(p, new size);
			q=(int *)realloc(p, 3* sizeof(int));
*/
#include <iostream>
using namespace std;

int main()
{
	float *p;
	//double *q;
	int *q;
	p=(float *)malloc(4);
	*p=80.5;
	cout<<"Float value: "<<*p<<endl;

	/*q=(double *)realloc(p,8);
	*q=358.7895;
	cout<<"realloc: "<<*q;*/

	q=(int *)realloc(p,8);
	*q=3.5;
	cout<<"realloc: "<<*q;

	return 0;
}