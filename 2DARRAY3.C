#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10][10];
 int i,j,m,n;
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
printf("below is your all 2 d array data:\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 getch();
}