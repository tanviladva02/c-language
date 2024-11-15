#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10],i,n,pos,value;
  printf("enter n value");
  scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
  printf("enter your position");
  scanf("%d",&pos);
  printf("enter your value");
  scanf("%d",&value);
    for(i=n-1;i>=pos;i--)
    {
     a[i+1]=a[i];
    }
     a[pos]=value;
    for(i=0;i<=n;i++)
    {
     printf("%d\t",a[i]);
    }
  getch();
}
