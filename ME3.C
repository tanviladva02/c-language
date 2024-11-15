#include<stdio.h>
#include<conio.h>
/*  *
   12
  ***
 1234
*****
*/
void main()
{
 int row,col,b,n;
 clrscr();
 for(row=1;row<=5;row++)
 {
  for(b=1;b<=5-row;b++)
  {
   printf("  ");
  }
  for(col=1;col<=row;col++)
  {
   if(row%2==1)
   {
     printf("* ");
   }
   else
   {
     for(col=1;col<=row;col++)
     {
      printf("%d ",col);
     }
   }

  }
   printf("\n");
 }

 getch();
}