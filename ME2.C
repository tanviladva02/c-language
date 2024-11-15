#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,ans;
 printf("enter number to make a table:");
 scanf("%d",&j);
 for(i=1;i<=10;i++)
 {
  ans=i*j;
  printf("%d*%d=%d\n",j,i,ans);
 }
 getch();
}