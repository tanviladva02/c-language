#include<stdio.h>
#include<conio.h>
void tem();
void main()
{
 clrscr();
 int i;
 for(i=1;i<=3;i++)
 {
  tem();
 }
 getch();
}

void tem()
{
 int f,c;
 printf("enter value:");
 scanf("%d",&c);
 f=c*1.8+32;
 printf("%d",f);
}