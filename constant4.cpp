#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;
		
		Demo():j(20)			//Member initialization
		{
			i=10;
			//j=20;				//Error
		}
		
		Demo(int a,int b):i(a),j(b)
		{
			cout<<"Inside parametrized constructor\n";
		}
};
int main()
{
	Demo dobj(11,21);
	cout<<dobj.i<<"\n";
	cout<<dobj.j<<"\n";
	
	dobj.i++;
	//dobj.j++;
	cout<<dobj.i<<"\n";
	return 0;
}