#include<stdio.h>
#include<conio.h>
/*1
  *  *
  1  2  3
  *  *  *  *
  1  2  3  4  5
*/
void main()
{
 clrscr();
 int i,j,n=1;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
  { if(i%2==0)
     {
      printf("* ");
     }
     else
     {
      for(j=1;j<=i;j++)
      {
       printf("%d ",j);
      }
     }
  }
  printf("\n");
 }
 getch();
}