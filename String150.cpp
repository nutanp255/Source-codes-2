//accept string from user covert the string lower case into upper case.

#include<iostream>
using namespace std;

void struprX(char str[])
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
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
	
	struprX(Arr);
	
	cout<<"string in upper case:"<<Arr<<endl;
	
	return 0;
}