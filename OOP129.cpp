//accept number from user and return the factorial of that number.
#include<iostream>
using namespace std;

class Number
{
	private:
	int iNo;		//characteristic
	
	public:
	//Behaviour
	void Accept()		//Setter
	{
		cout<<"Enter the value: "<<endl;
		cin>>this->iNo;
	}
	
	void Display()		//Getter
	{
		cout<<"value is: "<<this->iNo<<endl;
	}
	
	int Factorial()
	{
	int iFact=1,iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
	}
};
int main()
{
	Number nobj;
	int iRet=0;
	
	//cout<<nobj.iNo;	private 
	
	nobj.Accept();
	nobj.Display();
	
	iRet=nobj.Factorial();
	
	cout<<"Factorial is: "<<iRet<<endl;
	return 0;
}