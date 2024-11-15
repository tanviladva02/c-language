#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10][10]={{1,2},{3,4},{5,6}};
 int i,j;
 for(i=0;i<3;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 getch();
}