#include<stdio.h>
#include<conio.h>
/* 1 1 1
  2 2 2
  3 3 3
  4 4 4
  5 5 5
*/
void main()
{
 int raw,col;
 clrscr();
 for(raw=1;raw<=5;raw++)
 {
  for(col=1;col<=3;col++)
  {
   printf("%d ",raw);
  }
  printf("\n");
 }
 getch();
}