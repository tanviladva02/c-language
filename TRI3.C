#include<stdio.h>
#include<conio.h>
/*5
  5 4
  5 4 3
  5 4 3 2
  5 4 3 2 1
*/
void main()
{
 int row,col;
 clrscr();
 for(row=1;row<=5;row++)
 {
  for(col=5;col>=6-row;col--)
  {
   printf("%d ",col);
  }
   printf("\n");
 }

 getch();
}