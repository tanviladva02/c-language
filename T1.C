#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int no,sum=0,i;
 printf("enter your any no\n");
 scanf("%d",&no);
 while(no>0)
 {
  i=no%10;
  sum=sum+i;
  no=no/10;
 }
 printf("%d=sum of number",sum);
 getch();
}