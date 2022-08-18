#include<iostream>
using namespace std;

class base1
{
	public:
		int i;
		float f;
		
		void gun()
		{
		  cout<<"inside gun\n";
		}
};
class base2
{
	public:
		int j;
		float g;
		
		void fun()
		{
		  cout<<"inside fun\n";
		}
};
class derived:public base1,base2
{
	public:
		int i;
		double d;
		
		void sun()
		{
		 cout<<"inside sun\n";
		}
};
int main()
{
   derived dobj;
   //gun();
   //fun();
   dobj.sun();
   return 0;
}