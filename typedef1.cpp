#include<iostream>
using namespace std;
#define MAX 10;

int main()
{
	struct Demo
	{
		int no;
		int no2;
	};
	
	typedef struct Demo DEMO;
	typedef struct Demo *PDEMO;
	typedef struct Demo **PPDEMO;
	
	typedef struct Demo
	
	//struct Demo obj;
	DEMO obj;
	
	//struct Demo *p=&obj;
	PDEMO p=&obj;
	
	//struct Demo **q=&p;
	PPDEMO q=&p;
	
	return 0;
}