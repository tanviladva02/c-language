#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10]={1,2,30000,4,5};
 int i;
 for(i=0;i<=4;i++)
 {
 printf("a[%d]=%d\n",i,a[i]);
 }
 getch();
}