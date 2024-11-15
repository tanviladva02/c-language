#include<stdio.h>
#include<conio.h>
/*      5
      4 5
    3 4 5
  2 3 4 5
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
  for(col=6-row;col<=5;col++)
  {
   printf("%d ",col);
  }
   printf("\n");
 }

 getch();
}