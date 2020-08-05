#include <iostream>
using namespace std;

int selection(int arr[],int k,int N) //k is index,intailly start 0
{
	int loc,min;
	min=arr[k];
	loc=k;
	for(int j=k+1; j<N; j++) //start with 1
	{
		if(min>arr[j])
		{
			min=arr[j]; //new min value placed
			loc=j;		//store index in loc variable	
		}
	}
	return loc;
}

int main()
{
	int arr[]={34, 57, 11, 18, 6, 69, 12};
	int size=sizeof(arr)/sizeof(int);
	int temp,loc;

	cout<<"UnSorted selection: ";
	for(int k=0; k<size; k++)
	{
		cout<<arr[k]<<" ";
	}

	for(int k=0; k<=size-2; k++) // swap the smallest value form 1st element
	{
		loc=selection(arr,k,size);

		temp=arr[k];
		arr[k]=arr[loc];
		arr[loc]=temp;
	}

	cout<<"\nSorted selection: ";
	for(int k=0; k<size; k++)
	{
		cout<<arr[k]<<" ";
	}
	cout<<endl;

	return 0;
}