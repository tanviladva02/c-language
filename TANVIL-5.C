#include<stdio.h>
#include<conio.h>
#define A 3.28
//m=3.28*ft
void main()
{
  clrscr();
  int ft,m;
  printf("enter your ft");
  scanf("%i",&ft);
  m=(A*ft);
  printf("m=%i",m);

  getch();

}