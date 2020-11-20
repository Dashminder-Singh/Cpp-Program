// Write a program of strlen fn, without using string.h

#include <iostream>
using namespace std;

int strlen(char s[])
{
	int l=0,i=0;
	//char *p=s;
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	return l;

	/*int l=0;
	char *p=s;
	while(*p!='\0')  // *p point values of s[]
	{
		l++;
		p++;  // p point as a index values
	}
	return l;*/
}

int main()
{
	char s[]="DASHMINDER";
	int a=strlen(s);
	cout<<"The length of string is: "<<a;
	return 0;
}