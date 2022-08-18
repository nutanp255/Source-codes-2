#include<iostream>
using namespace std;

class Arithematic
{
 public: 
 int iNo1;
 int iNo2;
 
 Arithematic()
 {
 cout<<"Inside default constructor\n";
 iNo1=0;
 iNo2=0;
 }

  Arithematic(int A,int B)
 {
 cout<<"Inside parametrised constructor\n";
 iNo1=A;
 iNo2=B;
 }

 ~Arithematic()
 {
  cout<<"Inside Destructor\n";
 }

 int Addition()
 {
   int iAns=0;
   iAns=iNo1+iNo2;
   return iAns;
 }

 int Substraction()
 {
  int iAns=0;
  iAns=iNo1-iNo2;
  return iAns;
 }

};

int main()
{
 int iValue1=0,iValue2=0,iRet=0;
 
 cout<<"Enter the first number\n";
 cin>>iValue1;

 cout<<"Enter the second number\n";
 cin>>iValue2; 

 Arithematic obj1();
 Arithematic obj2(iValue1,iValue2);

 iRet=obj2.Addition();
 cout<<"Addition is: "<<iRet<<"\n";

 iRet=obj2.Substraction();
 cout<<"Substraction is: "<<iRet<<"\n";

 return 0;
}