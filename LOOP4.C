#include<stdio.h>
#include<conio.h>
//10 100 5 20 90 15 ...60 50 45
void main()
{
 clrscr();
 int a=10,b=100,c=5;
 while(a<=60)
 {
  printf("%d %d %d\t",a,b,c);
  a=a+10;
  b=b-10;
  c=c+10;
 }
 getch();
}