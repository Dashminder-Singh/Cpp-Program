#include <iostream>
using namespace std;

void selectionsort(int arr[],int size)
{
	int minIndex;
	int temp;
	for(int i=0; i<size-1; i++)    //index intailly 0 to N-2
	{
		minIndex=i;    //set min value is equal to ith loc
		for(int j=i+1; j<size; j++)   // j starts from 1 to N-1
		{
			if(arr[minIndex]>arr[j])
				minIndex=j;   //placed new min value with jth loc
		}
		temp=arr[minIndex];
		arr[minIndex]=arr[i];
		arr[i]=temp;
	}

}	
int main()
{
	int arr[]={5, 4, 1, 3, 2};
	int size=sizeof(arr)/sizeof(int);

	cout<<"Unsorted Array is: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}

	selectionsort(arr,size);

	cout<<"\nSorted Array is: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}