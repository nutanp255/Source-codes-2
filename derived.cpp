#include<iostream>
using namespace std;
class Base
{
	public:
	int i;
	virtual void run()
	{
		cout<<"inside run\n";
	}
	private:
	virtual void fun()
	{
		cout<<"Inside base fun\n";
	}
};
class Derived: public Base
{
	public:
	int j;
	void gun()
	{
		cout<<"Inside derived gun\n";
	}
};
int main()
{
	Derived dobj;
	//dobj.fun();
	dobj.run();
	return 0;
}