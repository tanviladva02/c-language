#include<stdio.h>
#include<conio.h>
void table();
void main()
{
 clrscr();
  table();
 getch();
}

void table()
{
 int no,j=1,ans;
 printf("enter the value of digit");
 scanf("%d",&no);
 while(j<10)
 {
   ans=no*j;
   printf("%d*%d=%d\n",no,j,ans);
   j++;

 }
}