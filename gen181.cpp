#include<iostream>
using namespace std;

class ArrayX
{
	public:
	int *Arr;
	int size;
	
	ArrayX(int value);
	
	~ArrayX();
	
	void Accept();
	
	void Display();
	
	int Maximum();
	
};
ArrayX::ArrayX(int value)
	{
		size=value;
		Arr =new int [size];
	}
ArrayX::~ArrayX()
	{
		delete[] Arr;
	}
void ArrayX::Accept()
	{
		cout<<"values are: "<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>Arr[i];
		}
	}
void ArrayX::Display()
	{
		cout<<"values are: "<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<Arr[i];
		}
	}
int ArrayX::Maximum()
	{
		int max=Arr[0];
		for(int i=0;i<size;i++)
		{
			if(Arr[i]>max)
			{
				max=Arr[i];
			}
		}
		return max;
	}

int main()
{
	ArrayX obj1(5);
	obj1.Accept();
	obj1.Display();
	int iret=obj1.Maximum();
	cout<<"maximum value: "<<iret<<endl;
	return 0;
}