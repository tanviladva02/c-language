#include<stdio.h>
#include<conio.h>
/* 400 400
   401 401
   402 402
   403 403
*/
void main()
{
 int raw,col;
 clrscr();
 for(raw=400;raw<=403;raw++)
 {
  for(col=1;col<=2;col++)
  {
   printf("%d ",raw);
  }
  printf("\n");
 }
 getch();
}