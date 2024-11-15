#include<stdio.h>
#include<conio.h>
//99 88 77 66 55 44 33 22 11
void main()
{
 int a=99;
 clrscr();
  do
  {
   printf("%d\t",a);
   a=a-11;
  }while(a>=11);
 getch();
}