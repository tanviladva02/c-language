#include<stdio.h>
#include<conio.h>
void circle();
void main()
{
 clrscr();
 int i;
 for(i=1;i<=3;i++)
 {
  circle();
 }
 getch();
}

void circle()
{
 int r,area;
 printf("enter the value of r:");
 scanf("%d",&r);
 area=3.14*r*r;
 printf("%d",area);
}