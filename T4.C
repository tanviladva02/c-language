#include<stdio.h>
#include<conio.h>
void main()
{
 int no,sum=0,i;
 clrscr();
 printf("enter any number");
 scanf("%d",&no);
 while(no>0)
 {
  i=no%10;
  sum=sum*10+i;
  no=no/10;
 }
 printf("revrse no=%d",sum);
 getch();
}