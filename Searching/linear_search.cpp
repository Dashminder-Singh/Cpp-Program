#include <iostream>
using namespace std;

void linear_search(int l[],int N,int item)
{
	int flag=1;
	for(int i=0; i<=N-1; i++)
	{
		if(l[i]==item)
		{
			flag=0;
			cout<<"Search Successful at index "<<i<<endl;
		}
	}
	if(flag==1)
		cout<<"Search Unsuccessful";
}

int main()
{
	int A[]={12,45,23,55,65,78,84,90,100};

	linear_search(A,9,55);  	//search 55
	return 0;
}