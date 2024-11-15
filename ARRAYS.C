#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,n,search;
 printf("how many records would you likes to insert in arrey:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("which record would you like to find:");
 scanf("%d",&search);
 for(i=0;i<search;i++)
 {
  if(a[i]==search)
  {
     search=i;
  }
 }
 printf("found=%dposition=%d",i,search);
 getch();
}