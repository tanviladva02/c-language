#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10][10];
 int i,j,m,n,p=0,t=0,z=0;
 printf("how many row you want\n");
 scanf("%d",&n);
 printf("how many col you want\n");
 scanf("%d",&m);
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("enter your value:");
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]>0)
   {
    p++;
   }
   else if(a[i][j]<0)
   {
    t++;
   }
   else
   {
    z++;
   }
  }
 }
 printf("here is your positive data:%d\n",p);
 printf("here is your negative data:%d\n",t);
 printf("here is your zero data :%d\n",z);
 getch();
}