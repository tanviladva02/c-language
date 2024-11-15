#include<stdio.h>
#include<conio.h>
//1 5 2 10 3 15 4 20 ...6 30
void main()
{
 clrscr();
 int a=1,b=5;
 while(a<=6)
 {
  printf("%d %d\t",a,b);
  a=a+1;
  b=b+5;
 }
 getch();

}