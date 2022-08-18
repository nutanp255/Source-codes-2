//accept string from user covert the string into lower case.

#include<iostream>
using namespace std;

void strlwrX(char str[])
{
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
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
	
	strlwrX(Arr);
	
	cout<<"string in lower case:"<<Arr<<endl;
	
	return 0;
}