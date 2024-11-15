#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int no,i,t,sum=0;
 printf("enter your number:\n");
 scanf("%d",&no);
 t=no;
 while(no>0)
 {
  i=no%10;
  sum=sum+(i*i*i);
  no=no/10;
 }
 if(sum==t)
 {
  printf("%d=number is armstrong:",t);
 }
 else
 {
  printf("%d=number is not armstrong:",t);
 }
 getch();
}