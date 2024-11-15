//take nothing return something
#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
 clrscr();
 int ans;
 ans=sum();
 printf("ans=%d",ans);
 getch();
}
int sum()
{
 int a,b,ans;
 printf("enter the value of a and b:");
 scanf("%d%d",&a,&b);
 ans=a+b;
 return ans;
}
