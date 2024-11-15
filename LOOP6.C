#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a=10,b=100,c=5;
 for( ;a<=60;a=a+10,b=b-10,c=c+10)
 printf("%d %d %d\t",a,b,c);
 getch();
}