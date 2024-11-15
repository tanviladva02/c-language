//take something return nothing
#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
{
 clrscr();
 int a,b,ans;
 printf("enter a and b value:");
 scanf("%d %d",&a,&b);
 sum(a,b);
 getch();
}
void sum(int a,int b)
{
 int ans;
 ans=a+b;
 printf("ans=%d",ans);
}
