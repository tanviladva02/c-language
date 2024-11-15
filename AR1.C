#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,value,position;
 clrscr();
 printf("how many records would you like to print:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("enter your value");
 scanf("%d",&value);
 printf("engter your position");
 scanf("%d",&position);
 for(i=n-1;i>=position;i--)
 {
  a[i+1]=a[i];
 }
  a[position]=value;
  n++;
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }
 getch();
}
