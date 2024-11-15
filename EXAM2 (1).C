#include<stdio.h>
#include<conio.h>
/* 1 2 3 4 5
   1 2 3 4
   1 2 3
   1 2
   1
*/
void main()
{
 clrscr();
 int row,col;
 for(row=1;row<=5;row++)
 {
  for(col=1;col<=6-row;col++)
  {
   printf("%d ",col);
  }
  printf("\n");
 }

 getch();
}