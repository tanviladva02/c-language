#include<stdio.h>
#include<conio.h>
void main()
{
 char day;
 clrscr();
 printf("M.monday\nT.tuesday\nW.wednesday\nt.thursday\nF.friday\nS.saturday\ns.sunday\n");
 printf("enter your number");
 scanf("%c",&day);
 if(day=='M')
 {
  printf("today is monday");
 }
 else if(day=='T')
 {
  printf("today is tuesday");
 }
 else if(day=='W')
 {
  printf("today is wednesday");
 }
 else if (day=='t')
 {
  printf("today is thursday");
 }
 else if(day=='F')
 {
  printf("today is friday");
 }
 else if(day=='S')
 {
  printf("today is saturday");
 }
 else if(day=='s')
 {
  printf("today is sunday");
 }
 else
 {
  printf("your number is invalid");
 }
 getch();
}
