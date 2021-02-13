#include<stdio.h>

int main()
{
    int app,a[100], size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    printf("Enter the elements to insert: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);

    }   
    
    printf("Enter the value to append: ");
    scanf("%d",&app);

    a[size]=app;

    for(int i=0; i<=size; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}