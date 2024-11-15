#include<stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
 clrscr();
 int ans,n;
 printf("enter your number:");
 scanf("%d",&n);
 factorial(n);
 getch();
}
int factorial(int n)
{
 if(n==1)
 {
  printf("%d\n",n);
  return 1;
 }
 else
 {
  printf("%d\n",n);
  return factorial(n-1);
 }
}