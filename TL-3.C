#include<stdio.h>
#include<conio.h>
#define C 2
void main()
{
clrscr();
 int a,b,ans;
 printf("enter a and b value");
 scanf("%i %i",&a,&b);
 ans=a*a+C*a*b+b*b;
 printf("ans=%i",ans) ;
getch();
}