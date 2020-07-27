#include <iostream>
#include <string>
using namespace std;

class gamingsystem      //base class
{
public:
	gamingsystem()
	{
		cout<<"Base1 class called"<<endl;
	}
};

class PC 				//base2 class
{
	public:
		string name;
		float price;
		PC()					//constructor name
		{
			cout<<"Base2 class called"<<endl;
		}
};

class gamingPC :public gamingsystem,public PC   // Derived class inherit b1 & b2
{
	public:
		string name;
		int vram;
		gamingPC()
		{
			cout<<"Derived class called"<<endl;
		}
};

int main()
{
	gamingPC d1;     
	return 0;
}