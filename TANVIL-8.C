#include<stdio.h>
#include<conio.h>
void main ()
{
  clrscr();
  long int salary,da,hra,ta,final;
  salary=1000;
  printf("salary=%ld\n",salary);
  da=(salary*10)/100;
  printf("da=%ld",da);
  hra=(salary*8)/100;
  printf("hra=%ld",hra);
  ta=(salary*5)/100;
  printf("ta=%ld",ta);
  final=salary+da+hra+ta;
  printf("your total salary =%ld",final);
  getch();
}