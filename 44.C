#include<stdio.h>
#include<conio.h>
#define A 1.8
#define B 32
//f=(c*1.8)+32
void main()
{

 clrscr();
 int c,f;
 printf("enter the value of c");
 scanf("%i=",&c);
 f=(c*A)+B;
 printf ("f=%i",f);
 getch();

}