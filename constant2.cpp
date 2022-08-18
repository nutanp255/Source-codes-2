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
};
int main()
{
	Demo dobj;
	cout<<dobj.i<<"\n";
	cout<<dobj.j<<"\n";
	return 0;
}