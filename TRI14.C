#include<stdio.h>
#include<conio.h>
/* 1 2 3 4 5
     2 3 4 5
       3 4 5
	 4 5
	   5
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
  for(col=row;col<=5;col++)
  {
   printf("%d ",col);
  }
   printf("\n");
 }

 getch();
}