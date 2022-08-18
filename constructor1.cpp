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
 x=ref.x;
 y=ref.y;
}

~Demo()
{
 cout<<"Inside destructor\n";
}
};
 int main()
{
 
 Demo obj1(11,21);
cout<<obj1.x<<"\n";
 
 Demo obj2(obj1);
cout<<obj2.x<<"\n";
cout<<obj1.x<<"\n";

Demo dobj();
 return 0;
}