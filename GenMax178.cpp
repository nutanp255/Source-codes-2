#include<iostream>
using namespace std;

template<class T>
T Maximum(T Brr[],int size)
{
	int i=0;
	T iMax=Brr[0];
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
	
	float Frr[]={10.4,20.6,30.2,40.1,50.8};
	float fRet=0;
	fRet=Maximum(Frr,5);
	cout<<"maximum is: "<<fRet<<endl;
	return 0;
}