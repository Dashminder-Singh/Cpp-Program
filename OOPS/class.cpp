#include <iostream>
#include <string>

using namespace std;

class laptop
{
	public:        //by default private
	string name;
	string brand;
	float price;
	string processor;

	void getdata()							//memeber Fn of class
	{
		cout<<"Name: ";
		cin>>name;
		cout<<"Brand: ";
		cin>>brand;
		cout<<"Price: ";
		cin>>price;
		cout<<"Processor: ";
		cin>>processor;
	}
	void showdata()
	{
		cout<<"Name: "<<name<<"\nBrand: "<<brand<<"\nPrice: "<<price<<"\nProcessor: "<<processor;
	}
	void startup()
	{
		cout<<"\nLaptop "<<name<<" has started";
	}
	void shutdown()
	{
		cout<<"\nLaptop "<<name<<" is shutting down";
	}
};


int main()
{
	laptop l1;
	l1.getdata();
	l1.showdata();
	l1.startup();
	//l1.shutdown();
	return 0;
}