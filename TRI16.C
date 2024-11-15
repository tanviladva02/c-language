#include<stdio.h>
#include<conio.h>
/* 5 4 3 2 1
     4 3 2 1
       3 2 1
	 2 1
	   1
*/
void main()
{
 int row,col,k;
 clrscr();
 for(row=1;row<=5;row++)
 {
  for(k=1;k<=row-1;k++)
  {
   printf("  ");
  }
  for(col=6-row;col>=1;col--)
  {
   printf("%d ",col);
  }
   printf("\n");
 }

 getch();
}