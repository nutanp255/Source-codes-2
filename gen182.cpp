#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
	public:
	T *Arr;
	int size;
	
	ArrayX(int value);
	~ArrayX();
	void Accept();
	void Display();
	T Maximum();
	
};
template<class T>
ArrayX<T>::ArrayX(int value)
	{
		size=value;
		Arr =new T[size];
	}
	
template<class T>
ArrayX<T>::~ArrayX()
	{
		delete[] Arr;
	}
	
template<class T>	
void ArrayX<T>::Accept()
	{
		cout<<"Enter the values: "<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>Arr[i];
		}
	}
	
template<class T>	
void ArrayX<T>::Display()
	{
		cout<<"values are: "<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<Arr[i]<<"\n";
		}
	}
template<class T>
T ArrayX<T>::Maximum()
	{
		T max=Arr[0];
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
	ArrayX <int>obj1(5);
	obj1.Accept();
	obj1.Display();
	int iret=obj1.Maximum();
	cout<<"maximum value: "<<iret<<endl;
	
	ArrayX <float>obj2(5);
	obj2.Accept();
	obj2.Display();
	float fret=obj2.Maximum();
	cout<<"maximum value: "<<fret<<endl;
	return 0;
}