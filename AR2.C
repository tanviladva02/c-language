#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],i,n,value,pos;
  clrscr();
  printf("how many records would you like to print:");
  scanf("%d",&n);
  printf("enter your record:");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("enter your value");
  scanf("%d",&value);
  printf("engter your position");
  scanf("%d",&pos);

  a[pos]=a[i-1];
  n--;
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
 getch();
}
