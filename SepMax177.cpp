#include<iostream>
using namespace std;

int Maximum(int Brr[],int size)
{
	int i=0,iMax=Brr[0],iCnt=0;
	for(i=0;i<size;i++)
	{
		if(Brr[i]>iMax)
		{
			iMax=Brr[i];
		}
	}
	return iMax;
}
int main()
{
	int Arr[]={10,20,30,40,50};
	int iRet=0;
	
	iRet=Maximum(Arr,5);
	cout<<"maximum is: "<<iRet<<endl;
	return 0;
}