#include<stdio.h>
#include<conio.h>
/**
  1  0
  *  *  *
  1  0  1  0
  *  *  *  *  *
*/
void main()
{
 clrscr();
 int i,j,n=1;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
  { if(i%2==1)
     {
      printf("* ");
     }
     else
     {
      for(j=1;j<=i;j++)
      {
	if(j%2==0)
	{
	 printf("0 ");
	}
	else
	{
	 printf("1 ");
	}
      }
     }
  }
  printf("\n");
 }
 getch();
}