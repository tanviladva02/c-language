#include<stdio.h>
#include<conio.h>
/* 1
   2 1
   3 2 1
   4 3 2 1
   5 4 3 2 1
*/
void main()
{
 clrscr();
 int row,col;
 for(row=1;row<=5;row++)
 {
  for(col=row;col>=1;col--)
  {
   printf("%d ",col);
  }
  printf("\n");
 }

 getch();
}