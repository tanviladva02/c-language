#include<stdio.h>
#include<conio.h>
/* 100 99 98 97
   100 99 98 97
   100 99 98 97
*/
void main()
{
 int raw,col;
 clrscr();
 for(raw=1;raw<=3;raw++)
 {
  for(col=100;col>=97;col--)
  {
   printf("%d ",col);
  }
  printf("\n");
 }
 getch();
}