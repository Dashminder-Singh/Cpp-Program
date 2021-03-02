#include <iostream>
using namespace std;

void Selection_sort(int arr[],int N) 
{
	int index, temp;
	for(int i=0; i<N-1; i++)
	{
		index=i;
		for(int j=i+1; j<N; j++)
		{
			if(arr[j]<arr[index])
			{
				index=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[index];
		arr[index]=temp;
	}

}

int main()
{
	int n;
	cout<<"Enter how many: ";
	cin>>n;
	cout<<"Enter "<<n<<" values: ";
	int arr[n];

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	Selection_sort(arr,n);
	cout<<"\nSorted Selection_sort: ";
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}