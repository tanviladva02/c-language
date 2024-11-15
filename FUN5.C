#include<stdio.h>
#include<conio.h>
void tri();
void main()
{
 clrscr();
 int i;
 for(i=1;i<=3;i++)
 {
  tri();
 }
 getch();
}

void tri()
{
 int l,b,ans;
 printf("enter value:");
 scanf("%d%d",&l,&b);
 ans=l*b;
 printf("%d",ans);
}