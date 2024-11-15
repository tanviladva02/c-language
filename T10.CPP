#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,d;
 printf("enter the value of a,b,c and d:\n");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if(a>b&&a>c&&a>d)
 {
   printf("a is greater");
 }
 else if(b>a&&b>c&&b>d)
 {
   printf("b is greater");

 }
 else if(c>a&&c>b&&c>d)
 {
   printf("c is greater");
 }
 else
 {
   printf("d is greater");
 }
 getch();
}