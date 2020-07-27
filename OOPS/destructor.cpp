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

	PC(const PC &p)   //Copy constructor
	{
		name=p.name;
		price=p.price+100.5;
		cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;
	}

	~PC()				//Destructor --Reverse order
	{
		cout<<"Destructing "<<price<<endl;        
	}
};

int main()
{
	PC pc;
	PC pc2("Dell",100.0);
	PC pc3=pc2;     //store the value of p object

	return 0;
}
