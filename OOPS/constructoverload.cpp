#include <iostream>
#include <string>
using namespace std;

class PC
{
	public:
	string name;
	float price;

	PC()    //Default constructor          
	{
		
		cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;
	}
	
	PC(string pcname, float pcprice)   //Parameterized constructor
	{
		name=pcname;
		price=pcprice;
		cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;

	}
	
};

int main()
{
	PC pc;
	PC pc2("Dell",100.0);   //send the values & pc2 is new obj of class

	return 0;
}