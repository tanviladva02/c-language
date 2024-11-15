#include<stdio.h>
#include<conio.h>
/*1
  1  0
  1  0  1
  1  0  1  0
  1  0  1  0  1
*/
void main()
{
 clrscr();
 int i,j,n=1;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
  { if(j%2==1)
     {
      printf("1 ");
     }
     else
     {
      printf("0 ");
     }
  }
  printf("\n");
 }
 getch();
}