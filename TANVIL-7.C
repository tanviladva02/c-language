#include<stdio.h>
#include<conio.h>
#define A 100
void main()
{
 clrscr();
 long int p,n,r,i;
 printf("enter the value of p,n and r");
 scanf("%ld %ld %ld",&p,&n,&r);
 i=(p*n*r)/A;
 printf("i=%ld",i);

 getch();
}