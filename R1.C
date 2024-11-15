#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int day;
 printf("1.monday\n2.tuesday\n3.wednesday\n4.thursday\n5.friday\n6.saturday\n7.sunday\n");
 printf("enter your number");
 scanf("%d ",&day);
 if(day==1)
 {
  printf("today is monday");
 }
 else if(day==2)
 {
  printf("today is tuesday");
 }
 else if(day==3)
 {
  printf("today is wednesday");
 }
 else if (day==4)
 {
  printf("today is thursday");
 }
 else if(day==5)
 {
  printf("today is friday");
 }
 else if (day==6)
 {
  printf("today is saturday");
 }
 else if (day==7)
 {
  printf("today is sunday");
 }
 else
 {
  printf("your number is invalid");
 }
 getch();
}
