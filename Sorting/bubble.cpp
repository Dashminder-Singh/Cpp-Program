#include <iostream>
using namespace std;

void bubblesort(int arr[],int N)
{
	int temp;
	for(int round=1; round<=N-1; round++){
		for(int i=0; i<=N-1-round; i++){
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	
}

int main()
{
	int arr[]={34, 15, 29, 8};
	int size=sizeof(arr)/sizeof(int);

	cout<<"Unsorted bubblesort: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}

	bubblesort(arr,size);
	cout<<"\nSorted bubblesort: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}