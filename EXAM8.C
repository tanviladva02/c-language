#include<stdio.h>
#include<conio.h>
/* 45
   4546
   454647
   45464748
   4546474849
*/
void main()
{
  int row,col;
  clrscr();
    for(row=45;row<=49;row++)
   {
     for(col=45;col<=row;col++)
     {
     printf("%d",col);
     }
   printf("\n");
  }

 getch();
}