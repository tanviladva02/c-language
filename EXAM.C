#include<stdio.h>
#include<conio.h>
/* 5
   4 4
   3 3 3
   2 2 2 2
   1 1 1 1 1
*/
void main()
{
 int row,col;
 clrscr();
 for(row=5;row>=1;row--)
 {
  for(col=1;col<=6-row;col++)
  {
   printf("%d ",row);
  }
  printf("\n");
 }

 getch();
}