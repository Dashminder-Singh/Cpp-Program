#include <iostream>
#include <string>
using namespace std;

class PC 				//base class
{
	public:
		string name;
		float price;
		PC()					//constructor name
		{
			cout<<"Base class called"<<endl;
		}
};

class gamingPC :public PC    	//Derived class inherit base class
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