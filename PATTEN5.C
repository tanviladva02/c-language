#include<stdio.h>
#include<conio.h>
/* 76 77 78 79 80
   76 77 78 79 80
   76 77 78 79 80
   76 77 78 79 80
*/
void main()
{
 int raw,col;
 clrscr();
 for(raw=1;raw<=4;raw++)
 {
  for(col=76;col<=80;col++)
  {
   printf("%d ",col);
  }
  printf("\n");
 }
 getch();
}