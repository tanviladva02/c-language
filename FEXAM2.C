#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,b,c;
  printf("enter any 3 numbers for finding max number:\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b&&a>c)
  {
   printf("a is max");
  }
  else if(b>a&&b>c)
  {
   printf("b is max");
  }
  else
  {
   printf("c is max");
  }
  getch();
}