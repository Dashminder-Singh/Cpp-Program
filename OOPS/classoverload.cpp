#include <iostream>
#include <string>
using namespace std;

class PC
{
	public:
	string name;
	int processor;

	void run()
	{
	cout<<"Void Run is running"<<endl;
	}
	void run(int a)
	{
	cout<<a<<" int Run is running"<<endl;
	}
};

int main()
{
	PC pc1;
	pc1.run();
	pc1.run(6);
	
	return 0;
}