#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int number;
 printf("enter your number");
 scanf("%d",&number);
 if(number<=0)
 {
  printf("your number is negative");
 }
 else
 {
  printf("your number is possitive");
 }
 getch();
}