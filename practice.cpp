#include<iostream>
using namespace std;

class Table
{
    public:
	int x;
	int y;

    Table()
	{
	  cout<<"Inside the default constructor\n";
	}
    Table(int, int)
	{
	  cout<<"Inside the paramiterised constructor\n";
	}
    Table(Table &ref)
	{
	  cout<<"Inside the copy constructor\n";
	}
    ~Table()
	{
	  cout<<"Inside the destructor\n";
	}
};
int main()
{
 Table tobj;
 Table tobj1(11,33);
 Table tobj2(tobj1);

 return 0;
}