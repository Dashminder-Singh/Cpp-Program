#include <iostream>
#include <string>
using namespace std;

class PC
{
	public:
	string name;
	float price;

	PC() 
	{     //fn nameof class & Default constructor,if we are not define values then give a garbage values
		name="Dell";
		price=100.0;
		cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;
	}
};

int main()
{
	PC pc1;    //Default constructor
	
	return 0;
}