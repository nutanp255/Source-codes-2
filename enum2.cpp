#include<iostream>
using namespace std;

int main()
{ 
	enum Marvellous_Batches{PPA=0,LB=1,LSP=2,Python=3};
	int Fees[]={15000,16000,17000,18000};
	const float Duration[]={3.5,4.0,3.5,4.5};
	int choice;
	
	cout<<"Select the batch that you to want to join \n";
	cin>>choice;
	
	switch(choice)
	{
		case PPA:
		cout<<"Thank you for selecting pre-placement activity batch\n";
		cout<<"Duration is:"<<Duration[PPA]<<"\n";
		cout<<"Fees are:"<<Fees[PPA]<<"\n";
		break;
		
		case LB:
		cout<<"Thank you for selecting logic building batch\n";
		cout<<"Duration is:"<<Duration[LB]<<"\n";
		cout<<"Fees are:"<<Fees[LB]<<"\n";
		break;
		
		case LSP:
		cout<<"Thank you for selecting LSP batch\n";
		cout<<"Duration is:"<<Duration[LSP]<<"\n";
		cout<<"Fees are:"<<Fees[LSP]<<"\n";
		break;
		
		case Python:
		cout<<"Thank you for selecting Python batch\n";
		cout<<"Duration is:"<<Duration[Python]<<"\n";
		cout<<"Fees are:"<<Fees[Python]<<"\n";
		break;
		
		default:
			cout<<"Sorry there is no such a batch\n";
			cout<<
	}
	cout<<"Thank you for visiting to Marvellous Infosystem\n";
	return 0;
}