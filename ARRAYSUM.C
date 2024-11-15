#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,n,sum=0;
 printf("how many records would you likes to insert in arrey:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  sum=sum+a[i];
 }
 printf("sum of your array=%d",sum);
 getch();
}