//take nothing return nothing
#include<stdio.h>
#include<conio.h>
void cir();
void main()
{
 clrscr();
 cir();
 getch();
}
void cir()
{
 int r,ans;
 printf("enter the value of r:");
 scanf("%d",&r);
 ans=3.14*r*r;
 printf("ans=%d",ans);
}
