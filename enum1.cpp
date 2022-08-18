#include<iostream>
using namespace std;

int main()
{
	int Input=0;
	//		   0	1	2	3	4	5	6
	enum Days{Sun,Mon,Tue,Wed,Thu,Fri,Sat};
	enum Days obj;
	
	obj=Tue;
	
	cout<<obj<<"\n";
	cout<<sizeof(obj)<<"\n";
	
	enum Gender{Female=1, Male=2};
	cout<<"Enter you gender\n";
	cout<<"1:Female\n";
	cout<<"2:Male\n";
	cin>>Input;

	switch(Input)
	{
		case Female:
		cout<<"Tax free limit is 3,00000\n";
		break;
		
		case Male:
		cout<<"Tax free limit is 250000\n";
		break;
		
		default:
		cout<<"Invalid gender\n";
	}
	
	
	return 0;
}