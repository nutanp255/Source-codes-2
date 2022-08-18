//accept string from user and toggle the case of that string.

#include<iostream>
using namespace std;

void strtoggleX(char str[])
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}
}
int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strtoggleX(Arr);
	
	cout<<"string after toggling:"<<Arr<<endl;
	
	return 0;
}