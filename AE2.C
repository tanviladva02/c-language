#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
  int a[10],n,i,max=0,min;
  printf("how many records would you like to insert:");
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
  printf("maximum number=%d\n",max);
  printf("minimum number=%d\n",min);
 getch();
}
