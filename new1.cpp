#include<iostream>
using namespace std;

class Demo
{
 public:
 int x;
 int y;
 
 Demo()
{
  cout<<"Inside default constructor\n";
}
 ~Demo()
{
  cout<<"Inside the destructor\n";
}

 void fun()
  {
    cout<<"Inside fun\n";
  }
};
int main()
{
  Demo obj;			//Static object creation

 Demo *ptr= NULL;

 ptr =new Demo;			//Dynamic object creation

 obj.fun();

 ptr->fun();			//direct accessing operator

// delete ptr;
 
 return 0;
}