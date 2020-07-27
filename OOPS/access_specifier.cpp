#include <iostream>
#include <string>
using namespace  std;

class PC
{
//public:
	string name;
//protected:
	float price;
public:
	PC()
	{
		name="Dell";
		price=100.0;
	}
	void show()
	{
		cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;
	}

};
 int main()
 {
 	PC pc1;
 	pc1.show();
 	//cout<<pc1.name<<endl;
 	//cout<<pc1.price<<endl;
 	return 0;
 }
	
