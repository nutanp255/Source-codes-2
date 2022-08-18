#include<iostream>
using namespace std;

class ArrayX
{
	public:
	int *Arr;
	int size;
	
	ArrayX(int value)
	{
		size=value;
		Arr =new int [size];
	}
	~ArrayX()
	{
		delete[] Arr;
	}
	void Accept()
	{
		cout<<"values are: "<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>Arr[i];
		}
	}
	void Display()
	{
		cout<<"values are: "<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<Arr[i];
		}
	}
};

int main()
{
	ArrayX obj1(5);
	obj1.Accept();
	obj1.Display();
	return 0;
}