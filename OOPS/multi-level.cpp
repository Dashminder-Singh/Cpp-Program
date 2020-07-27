#include <iostream>
#include <string>
using namespace std;

class gamingsystem   //base class   
{
public:
	gamingsystem()
	{
		cout<<"Base class called"<<endl;
	}
};

class PC :public gamingsystem 		//inherit base class	
{
	public:
		string name;
		float price;
		PC()			
		{
			cout<<"Derived class1 called"<<endl;
		}
};

class gamingPC :public PC    // inherit derived class1
{
	public:
		string name;
		int vram;
		gamingPC()
		{
			cout<<"Derived class2 called"<<endl;
		}
};

int main()
{
	gamingPC d1;     
	return 0;
}