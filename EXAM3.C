#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int number;
 printf("enter your number");
 scanf("%d",&number);
 if(number%2==0)
 {
  printf("your number is even");
 }
 else
 {
  printf("your number is odd");
 }

 getch();
}