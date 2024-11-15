#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
  int a[10],n,i,search;
  printf("how many records would you like to insert:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("which numbers position would you like to find:");
  scanf("%d",&search);
  for(i=0;i<n;i++)
  {
   if(a[i]==search)
   {
      search=i;
   }
  }
  printf("postion=%d\n",search);
 getch();
}
