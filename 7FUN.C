//take something return something
#include<stdio.h>
#include<conio.h>
int cir(int);
void main()
{
 clrscr();
 int r,ans;
 printf("enter r value:");
 scanf("%d",&r);
 ans=cir(r);
 printf("ans=%d",ans);
 getch();
}
int cir(int r)
{
 int ans;
 ans=3.14*r*r;
 return ans;
}
