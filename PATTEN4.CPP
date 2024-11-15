#include<stdio.h>
#include<conio.h>
/* 99 99 99
   98 98 98
   97 97 97
   96 96 96
*/
void main()
{
 int raw,col;
 clrscr();
 for(raw=99;raw>=96;raw--)
 {
  for(col=1;col<=3;col++)
  {
   printf("%d ",raw);
  }
  printf("\n");
 }
 getch();
}