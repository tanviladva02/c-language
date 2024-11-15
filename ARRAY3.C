#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,n;
 printf("how many records you want to inssert in array:\n");
 scanf("%d",&n);
 printf("enter your record\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("below is your inssert records:\n");
 for(i=0;i<n;i++)
 {
   printf("a[%d]=%d\n",i,a[i]);
 }
 getch();
}