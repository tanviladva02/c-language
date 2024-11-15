#include<stdio.h>
#include<conio.h>
void main()
{
 int no,sum=0,first,last;
 clrscr();
 printf("enter any number");
 scanf("%d",&no);
 first=no;
 while(first>=10)
 {
  first /=10;
 }
 last=no%10;
 sum=first+last;
 printf("sum of first and last digit=%d\n",sum);
 getch();
}