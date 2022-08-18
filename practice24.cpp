//accept number from user to check your number is divisible by 3 and 5.

#include<iostream.h>

bool Check(int iNo)
{
	if((iNo%3==0)&&(iNo%5==0))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue=0;
	bool bRet=false;
	cout<<"Enter number";
	cin>>"%d">>iValue>>"\n";
	bRet=Check(iValue);
	if(bRet==true)
	{
		cout<<"%d is divisible by 3 &5"<<iValue<<"\n";
	}
	else
	{
		cout<<"%d is not divisible by 3 &5"<<iValue<<"\n";
	
	}
	return 0;
}
