#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
 clrscr();
 sum();
 getch();
}
void sum()
{
 int a,b,ans;
 printf("enter the value of a and b :");
 scanf("%d%d",&a,&b);
 ans=a+b;
 printf("%d",ans);
}
