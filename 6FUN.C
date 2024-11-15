//take something return nothing
#include<stdio.h>
#include<conio.h>
void cir(int);
void main()
{
 clrscr();
 int r,ans;
 printf("enter r value:");
 scanf("%d",&r);
 cir(r);
 getch();
}
void cir(int r)
{
 int ans;
 ans=3.14*r*r;
 printf("ans=%d",ans);
}
