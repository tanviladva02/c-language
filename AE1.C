#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
  int a[10],n,i,neg;
  printf("how many records would you like to insert:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   if(a[i]<0)
   {
    printf("your negative elements=%d\n",a[i]);
   }
  }
 getch();
}
