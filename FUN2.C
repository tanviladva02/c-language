#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
 clrscr();
 int i;
 for(i=1;i<=3;i++)
 {
  sum();
 }
 getch();
}

void sum()
{
 int a,b,ans;
 printf("enter value:");
 scanf("%d%d",&a,&b);
 ans=a+b;
 printf("%d",ans);
}