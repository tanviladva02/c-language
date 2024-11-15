#include<stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
 int ans,n;
 clrscr();
 printf("enter your number:");
 scanf("%d",&n);
 ans=factorial(n);
 getch();
}
int factorial(int n)
{
 if(n==10)
 {
  printf("%d\n",n);
  return 10;
 }
 else
 {
  printf("%d\n",n);
  return factorial(n+1);
 }
}