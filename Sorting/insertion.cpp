#include <iostream>
using namespace std;

void insertion(int arr[],int N)
{
	int temp,i,j;
	for(i=1; i<N; i++)
	{	
		temp=arr[i];      //45 assign temp & increment i 
		for(j=i-1; j>=0 && temp<arr[j]; j--)	 // i=2 & j=0,1 

			arr[j+1]=arr[j];	//a[2],a[3]...so on
		arr[j+1]=temp;			// if false, temp store in a[2+1]
	}
}

//void insertion(int [], int);
int main()
{
	int arr[]={31, 45, 11, 89, 55, 19, 21, 8, 40};
	int size=sizeof(arr)/sizeof(int);

	cout<<"UnSorted insertion: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}

	insertion(arr,size);

	cout<<"\nSorted insertion: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}


