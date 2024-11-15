//take nothing return something
#include<stdio.h>
#include<conio.h>
int cir();
void main()
{
 clrscr();
 int ans;
 ans=cir();
 printf("ans=%d",ans);
 getch();
}
int cir()
{
 int r,ans;
 printf("enter the value of r:");
 scanf("%d",&r);
 ans=3.14*r*r;
 return ans;
}
