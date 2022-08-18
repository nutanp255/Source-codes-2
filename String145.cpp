//accept string from user and count number of capital character from string by using ASCII value.

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))	//if((*str>=97)&&(*str<=122))//by ascii value
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	iRet=CountCapital(Arr);
	cout<<"Count number of character:"<<iRet<<endl;
	return 0;
}