#include<stdio.h>
#include<conio.h>
/*      1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/
void main()
{
 int row,col,k;
 clrscr();
 for(row=1;row<=5;row++)
 {
  for(k=1;k<=5-row;k++)
  {
   printf("  ");
  }
  for(col=1;col<=row;col++)
  {
   printf("%d ",col);
  }
   printf("\n");
 }

 getch();
}