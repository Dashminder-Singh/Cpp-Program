#include <iostream>
using namespace std;

void run()
{
	cout<<"Run is running"<<endl;
}
void run(int a)
{
	cout<<"Run with int "<<a<<endl;
}
void run(int a,int b)
{
	cout<<"Run with int "<<a<<" "<<b<<endl;
}
void run(char a)
{
	cout<<"Run with char "<<a<<endl;
}
void run(char a,int b)
{
	
}

int main()
{
	run();
	run(6);
	run(7,8);
	run('A');
	return 0;
}