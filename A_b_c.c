#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c;
 printf("enter the value of a,b,c:\n");
 scanf("%i %i %i",&a,&b,&c);
 if(a>b)
 {
  if(a>c)
  {
  printf("yes,a is greater\n");
  }
  else
  {
   printf("yes,c is greater\n");
  }
 }
 else
 {
  if(b>c)
  {
   printf("yes, b is greater\n");
  }
  else
  {
   printf("yes,c is greater\n");
  }
 }
 if(a<b)
 {
  if(a<c)
  {
  printf("yes,a is smaller\n");
  }
  else
  {
   printf("yes,c is smaller\n");
  }
 }
 else
 {
  if(b<c)
  {
   printf("yes, b is smaller\n");
  }
  else
 {
   printf("yes,c is smaller\n");
  }
 }
 getch();
 }