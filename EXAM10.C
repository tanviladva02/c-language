#include<stdio.h>
#include<conio.h>
//1 8 15 22 29 36 43 90 100 110 120 130 140
void main()
{
 int a=90,b=1;
 clrscr();
 while(a<=140)
 {
   while(b<=43)
   {
    printf("%d\t",b);
    b=b+7;
   }
   printf("%d\t",a);
   a=a+10;
 }
 getch();
}

