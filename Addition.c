#include<stdio.h>
int Addition(int No1,int No2)
{
  int Ans=0;
  Ans=No1+No2;
  return Ans;
}
int main()
{
  int A=10;
  int B=11;
  int C=0;
 
C=Addition(A,B);
printf("%d",C);
return 0;
}