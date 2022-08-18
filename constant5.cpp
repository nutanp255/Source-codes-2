#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;							//constant characteristic
		
		Demo(int a,int b):j(b)
		{
			i=a;
		}
		void fun()
		{
			cout<<"Inside fun\n";
			i++;									//Allowed
			//j++;									//Not Allowed
		}
		//b is a constant input argument
		void gun(int a,const int b) const			//constant function/behaviour
		{
			int x=10;
			const int y=20;
			
			cout<<"Inside gun\n";
			//i++;									//Not Allowed
			//j++;									//Not Allowed
			
			x++;									//Allowed
			//y++;									//Not Allowed
			
			a++;									//Allowed
			//b++;								 	//Not Allowed
		}
};

int main()
{
	Demo dobj1(11,21);
	const Demo dobj2(11,21);
	
	dobj1.fun();
	dobj1.gun(10,20);
	
	//dobj2.fun();
	//dobj2.gun();
	dobj2.gun(10,20);
	
	return 0;
}