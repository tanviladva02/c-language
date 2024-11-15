#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10],i,n,large=0;
  printf("how many elements would you like to insert in array :");
  scanf("%d",&n);
  printf("insert your elements");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]>large)
    {
       large=a[i];
    }
  }
  printf("largest elements is=%d",large);
  getch();
}