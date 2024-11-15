#include<stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
 clrscr();
 int ans,n;
 printf("enter your number:");
 scanf("%d",&n);
 ans=factorial(n);
 printf("ans=%d\n",ans);
 getch();
}
int factorial(int n)
{
 if(n==1)
 {
  return 1;
 }
 else
 {
  return n*factorial(n-1);
 }
}