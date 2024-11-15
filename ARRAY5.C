#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,p=0,n,ne=0,z=0;
 printf("how many records you want to inssert in array:\n");
 scanf("%d",&n);
 printf("enter your record\n");
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
  else if(a[i]<0)
  {
   ne++;
  }
  else
  {
   z++;
  }
 }
 printf("positive number=%d\n",p);
 printf("negative number=%d\n",ne);
 printf("zero number=%d\n",z);
 getch();
}