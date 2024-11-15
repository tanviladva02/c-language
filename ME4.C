#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,no;
 printf("how many records would you like to insret:");
 scanf("%d",&no);
 printf("enter your records:\n");
 for(i=1;i<=no;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("below is your reverse array:\n");
 for(i=no;i>=1;i--)
 {
  printf("%d\n",a[i]);
 }
 getch();
}