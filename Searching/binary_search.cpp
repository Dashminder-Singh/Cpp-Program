#include <iostream>
using namespace std;

void bin_search(int arr[],int N,int item)
{
	int l=0, u=N-1, m;

	while(l<=u)
	{
		m=(l+u)/2;

		if(arr[m]==item)
		{
			cout<<"Search Successful at index "<<m<<endl;
			return;
		}
		else if (item>arr[m])
		{
			l=m+1;
		}
		else
		{
			u=m-1;
		}
	}
	cout<<"Search Unsuccessful";
}
int main()
{
	//int A[]={25,31,43,11,17,64,37,81,90,100,13};
	 //Unsorted, Before Searching,we have to sort this array in binary search//

	int A[]={11,13,17,25,31,37,43,64,81,90,100};
	int item=64;   //search 64

	bin_search(A,11,item);
	return 0;
}