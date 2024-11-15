#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char month;
 printf("J.january\nF.february\nM.march\nA.april\nm.may\nj.jun\nJ1.july\na.august\ns1.september\nO.octomber\nN.november\nD.december\n");
 printf("enter your number");
 scanf("%c",&month);
 if(month=='J')
 {
  printf("january");
 }
 else if(month=='F')
 {
  printf("february");
 }
 else if (month=='M')
 {
  printf("march");
 }
 else if(month=='A')
 {
  printf("april");
 }
 else if(month=='m')
 {
  printf("may");
 }
 else if(month=='j')
 {
  printf("june");
 }
 else if (month=='J1')
 {
  printf("july");
 }
 else if (month=='a')
 {
  printf("august");
 }
 else if (month=='S1')
 {
  printf("september");
 }
 else if(month=='O')
 {
  printf("octomber");
 }
 else if (month=='N')
 {
  printf("november");
 }
 else if (month=='D')
 {
  printf("december");
 }
 else
 {
  printf("your number is invalid");
 }
 getch();
}