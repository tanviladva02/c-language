//take something return something
#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
 clrscr();
 int a,b,ans;
 printf("enter a and b value:");
 scanf("%d %d",&a,&b);
 ans=sum(a,b);
 printf("ans=%d",ans);
 getch();
}
int sum(int a,int b)
{
 int ans;
 ans=a+b;
 return ans;
}
