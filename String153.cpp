//accept string from user and copy the string.

#include<iostream>
using namespace std;

void strcpyX(char *src,char *dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}
int main()
{
	char Arr[20];		//bhareleli notebook
	char Brr[20];		//kori notebook
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strcpyX(Arr,Brr);
	
	cout<<"string after copy: "<<Brr<<endl;
	
	return 0;
}

