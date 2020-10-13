#include <iostream>
#include <string>
using namespace std;

class PC
{
	public:
	string name;
	int processor;
	float price;

	void run()
	{
	cout<<"Void Run is running"<<endl;
	}
	void run(int a)
	{
	cout<<a<<" int Run is running"<<endl;
	}
	void run(int a, float b)
	{
		cout<<a<<" int & "<<b<<" float Run is running"<<endl;
	}
	void run(char a)
	{
		cout<<a<<" char Run is running"<<endl;
	}
};

int main()
{
	PC pc1;
	pc1.run();
	pc1.run(6);
	pc1.run(2,4.5);
	pc1.run('A');
	
	return 0;
}