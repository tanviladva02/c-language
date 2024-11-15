#include<stdio.h>
#include<conio.h>
/**
  *  *
  *  *  *
  *  *  *  *
  *  *  *  *  *
*/
void main()
{
 clrscr();
 int i,j,k=1;
 for(i=1;i<=5;i++)
 {
  for(k=1;k<=6-i;k++)
  {
   printf("  ");
  }
   for(j=6-i;j<=5;j++)
   {
    printf("* ",j);
   }
  printf("\n");
 }
 getch();
}