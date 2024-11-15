#include<stdio.h>
#include<conio.h>
void pal();
void main()
{
 clrscr();
  pal();
 getch();
}

void pal()
{
 int no,sum=0,j,t;
 printf("enter the value of digit");
 scanf("%d",&no);
 while(no>0)
 {
  j=no%10;
  sum=(sum*10)+j;
  no=no/10;
 }
 if(sum=t)
 {
  printf("yes");
 }
 else
 {
  printf("no");
 }
}