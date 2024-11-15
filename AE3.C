#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
  int a[10],n,i,p=0,t=0;
  printf("how many records would you like to insert:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   if(a[i]>0)
   {
     p++;
   }
  }
  for(i=0;i<n;i++)
  {
   if(a[i]<0)
   {
    t++;
   }
  }
  printf("total positive number=%d\n",p);
  printf("total negative number=%d\n",t);
 getch();
}
