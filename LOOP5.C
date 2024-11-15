#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a=10,b=100,c=5;
 do
 {
  printf("%d %d %d\t",a,b,c);
  a=a+10;
  b=b-10;
  c=c+10;
 }while(a<=60);
 getch();
}