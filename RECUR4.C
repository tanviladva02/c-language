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
 printf("ans=%d\n",ans);
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
  return n+factorial(n-1);
 }
}