#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,d;
 printf("enter the value of a,b,c and d:\n");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if(a<b&&a<c&&a<d)
 {
   printf("a is small");
 }
 else if(b<a&&b<c&&b<d)
 {
   printf("b is small");

 }
 else if(c<a&&c<b&&c<d)
 {
   printf("c is small");
 }
 else
 {
   printf("d is small");
 }
 getch();
}