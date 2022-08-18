//accept two string from 2 string of user copy the content of 2nd string at the end of the 1st string.// concaniate the 2 string.

#include<iostream>
using namespace std;

void strcatX(char *src,char *dest)
{
	while(*src!='\0')
	{
		src++;
	}
	
	while(*dest !='\0')
	{
		*src=*dest;
		src++;
		dest++;
	}
	*src='\0';
}
int main()
{
	char Arr[20];		//bhareleli notebook
	char Brr[20];		//kori notebook
	
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);
	
	cout<<"Enter second string"<<endl;
	cin.getline(Brr,20);
	
	strcatX(Arr,Brr);
	
	cout<<"string after concatination: "<<Arr<<endl;
	
	return 0;
}

