#include<iostream>
using namespace std;

//public private
class Demo
{
	int i;
  public:
	int x;

  private:
	int y;

  public:
	Demo()
	{
	  x=10;
	  y=20;
	  i=30;
	}

	void fun()
	{
	 cout<<"Inside public fun\n";
	 cout<<y<<"\n";			//allowed
	 gun();
	}

 private:
	void gun()
	{
	  cout<<"Inside private gun\n";
	  cout<<y;			//allowed
	}
};

int main()
{
 Demo obj;
 cout<<obj.x<<"\n";	//allowed
 //cout<<obj.y<<"\n";	//not allowed
 //cout<<obj.i<<"\n";	//not allowed
 
 obj.fun();		//allowed
 //obj.gun();		//not allowed
 return 0;
}