#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,n,max=0,min;
 printf("how many records would you likes to insert in arrey:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]>max)
  {
   max=a[i];
  }
 }
 min=max;
 for(i=0;i<n;i++)
 {
  if(a[i]<min)
  {
  min=a[i];
  }
 }
 printf("max of array=%d\n",max);
 printf("min of array=%d\n",min);
 getch();
}