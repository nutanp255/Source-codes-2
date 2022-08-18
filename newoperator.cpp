#include<iostream>
using namespace std;

int main()
{
	int iNo=0;
	int *iptr=NULL;
	iptr=new int;
	
	if(iptr==NULL)
	{
		cout<<"unable to allocate the memery";
	}
	else
	{
		cout<<"Memery get successfully added";
	}
	delete iptr;
	
	return 0;
}