#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int month;
 printf("1.january\n2.february\n3.march\n4.april\n5.may\n6.jun\n7.july\n8.august\n9.september\n10.octomber\n11.november\n12.december\n");
 printf("enter your number");
 scanf("%d",&month);
 if(month==1)
 {
  printf("january");
 }
 else if(month==2)
 {
  printf("february");
 }
 else if (month==3)
 {
  printf("march");
 }
 else if(month==4)
 {
  printf("april");
 }
 else if(month==5)
 {
  printf("may");
 }
 else if(month==6)
 {
  printf("june");
 }
 else if (month==7)
 {
  printf("july");
 }
 else if (month==8)
 {
  printf("august");
 }
 else if (month==9)
 {
  printf("september");
 }
 else if(month==10)
 {
  printf("octomber");
 }
 else if (month==11)
 {
  printf("november");
 }
 else if (month==12)
 {
  printf("december");
 }
 else
 {
  printf("your number is invalid");
 }
 getch();
}