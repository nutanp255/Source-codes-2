#include<iostream>
using namespace std;

int main()
{
 int a=0,b=0;
 cout<<"Enter the first number: ";
 cin>>a;
 
 cout<<"Enter the second number: ";
 cin>>b;

 int max=a>b?a:b;
 cout<<"Maximum number is: "<<max;
 return 0;
}