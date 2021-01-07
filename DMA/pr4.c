#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	int *q;
	p=(int*)malloc(4 *sizeof(int));

	for (int i=0; i<10; i++)
	{
		p[i]=7 * (i+1);
		printf("The value of 7 X %d = %d \n", i+1, p[i]);
	}

	printf("\nAfter reallocating....\n\n");
	q=(int*)realloc(p, 6 *sizeof(int));
	for (int i=0; i<15; i++)
	{
		p[i]=7*(i+1);
		printf("The value of 7 X %d = %d \n", i+1, p[i]);
	}
	return 0;
}