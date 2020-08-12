#include <iostream>
using namespace std;

int main()
{
	int a=10, *p=&a;

	char ch='A', &cho=ch;

							//cho+=a;
	ch=ch+a;
	*p=*p+ch;
							//*p+=ch;
							
	cout<<a<<", "<<ch<<endl;
	return 0;
}