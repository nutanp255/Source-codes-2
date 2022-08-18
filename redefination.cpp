#include<iostream>
using namespace std;

class Demo
{
	public:
	int i,j;
	
	void fun()		//defination
	{
	    cout<<"Inside fun\n";
	}
	
	void gun()		//defination
	{
		cout<<"Inside gun\n";	
	}
};

class Hello: public Demo
{
	public:
	int x,y;
	
	void sun()		//defination
	{
		cout<<"Inside sun\n";		
	}
	
	void gun(int n)		//redefination
	{
		cout<<"Inside gun of child\n";
	}
};

int main()
{
	retrun 0;
}