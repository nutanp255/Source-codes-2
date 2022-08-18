#include<iostream>
using namespace std;


class Demo
{
  public:
	int i;
  private:
	int j;
  protected:
	int k;
};

class Hello:public Demo
{
  public:
	int x;
  private:
	int y;
  protected:
	int z;
  public:
	{
	 cout<<k<<"\n";
	}
};

int main()
{
 cout<<sizeof(Demo)<<"\n";
 cout<<sizeof(Hello)<<"\n";

 Demo dobj;
 cout<<dobj.i;	//Allowed
 //cout<<dobj.j;	//NA
 //cout<<dobj.k;	//NA

 Hello hobj;
 cout<<hobj.x;	//A
 //cout<<hobj.y;	//NA
 //cout<<hobj.z;	//NA

 cout<<hobj.i;	//A
 //cout<<hobj.j;	//NA
 //cout<<hobj.k;	//NA

 return 0;
}