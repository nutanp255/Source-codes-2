#include<iostream>
using namespace std;

void Display(int Brr[],int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		cout<<Brr[i]<<endl;
	}
}
int main()
{
	int Arr[]={10,20,30,40,50};
	
	Display(Arr,5);
	return 0;
}