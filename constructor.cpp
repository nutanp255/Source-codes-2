#include<iostream>
using namespace std;

class Demo
{
 public:
 int x;
 int y;

  Demo()
{
  cout<<"Inside Defualt constructor\n";
 x=0;
 y=0;
}

Demo(int i,int j)
{
 cout<<"Inside the paramitersied constructor\n";
 x=i;
 y=j;
}

Demo(Demo &ref)
{
 cout<<"Inside copy constructor\n";
}

~Demo()
{
 cout<<"Inside destructor\n";
}
};
 int main()
{
 
 Demo obj1(11,21);
 Demo obj2(51,101);

 cout<<sizeof(obj1)<<"\n";
 cout<<sizeof(obj2)<<"\n";

 cout<<"Value of x in obj1 :"<<obj1.x<<"\n";
 cout<<"Value of x in obj2 :"<<obj2.x<<"\n";

 obj1.x++;

 cout<<"Value of x in obj1 :"<<obj1.x<<"\n";
 cout<<"Value of x in obj2 :"<<obj2.x<<"\n";


 return 0;
}