#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *remove_spaces(char *s)
{
	int i=0,j=0;
	char *p;
	p=malloc(strlen(s+1)); // add null
	while(*(s+i)!='\0')
	{
		while(*(s+i)==' ')  // ignore spaces
			i++;
		while(*(s+i)!=' ' && *(s+i)!='\0'){
			*(p+i)=*(s+i);
			i++;
			j++;
		}
		if(*(s+i)=='\0' && *(p+j-1)==' ')
			j--;
		*(p+j)=*(s+i);
		j++;
	}
	return p;
}

int count_words(char *s)
{
	int i=0, count=0;
	while(*(s+i)!='\0')
	{
		if(*(s+i)==' ')
			count++;
		i++;
	}
	return count+1;   // 4 spaces and 5 words= count+1
}
int main()
{
	int n;
	char str[100];
	printf("Enter a string: ");
	gets(str);
	printf("\nString length: %d",strlen(str));
	n=count_words(str);
	printf("\nNo of words: %d",n);

	strcpy(str,remove_spaces(str));
	printf("\nString length: %d",strlen(str));
	n=count_words(str);
	printf("\nNo of words: %d",n);
	return 0;
}