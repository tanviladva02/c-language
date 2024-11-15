#include<stdio.h>
#include<conio.h>
void rev();
void main()
{
 clrscr();
  rev();
 getch();
}

void rev()
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
 printf("%d\n",sum);
}