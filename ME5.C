//take something return nothing
#include<stdio.h>
#include<conio.h>
void cube(int);
void main()
{
 clrscr();
 int r;
 printf("enter the value of r for making cube:");
 scanf("%d",&r);
 cube(r);
 getch();
}
void cube(int r)
{
 int cube;
 cube=r*r*r;
 printf("%d",cube);
}