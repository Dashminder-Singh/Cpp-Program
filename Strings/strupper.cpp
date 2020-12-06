#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[20];
	cout<<"Enter a string: ";
	gets(str);

	for(int i=0; str[i]!='\0'; i++)
	{
		if(str[i]>='a' && str[i]<='z')   // a=97 & z=121 A=97-32=65
		{
			str[i]=str[i]-32;	
		}
	}
	cout<<str;
	return 0;
}