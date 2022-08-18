//Accept string from user and count number of letter from screen
#include<iostream>
using namespace std;

int strlenx(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		iCnt++;
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
	
	iRet=strlenx(Arr);
	cout<<"String length is:"<<iRet<<endl;
	return 0;
}