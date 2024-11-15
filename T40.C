#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int i,p,n,r;
 printf("enter the value of n:\n");
 scanf("%ld",&n);
 if(n>0&&n<=1)
 {
  r=5;
 }
 else if(n>1&&n<=2)
 {
  r=6;
 }
 else if(n>2&&n<=3)
 {
  r=7;
 }
 else
 {
  r=8;
 }
 printf("enter your p:\n");
 scanf("%ld",&p);
 i=(p*n*r)/100;
 printf("ans=%ld",i);
 getch();
}