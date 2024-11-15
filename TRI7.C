#include<stdio.h>
#include<conio.h>
/*5 4 3 2 1
  5 4 3 2
  5 4 3
  5 4
  5
*/
void main()
{
 int row,col;
 clrscr();
 for(row=1;row<=5;row++)
 {
  for(col=5;col>=row;col--)
  {
   printf("%d ",col);
  }
   printf("\n");
 }

 getch();
}