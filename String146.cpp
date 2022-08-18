//accept string from user and count spaces in string

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[80];
	int iRet=0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,80);
	
	iRet=CountCapital(Arr);
	cout<<"Count number of character:"<<iRet<<endl;
	return 0;
}