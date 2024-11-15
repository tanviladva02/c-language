#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int no,sum=0,i,t;
 printf("enter any no\n",no);
 scanf("%d",&no);
 no=no/10;
 while(no>10)
 {
  i=no%10;
  sum=sum+i;
  no=no/10;
 }
 printf("your ans=%d",sum);
 getch();
}