#include<stdio.h>;
#include<conio.h>;
void main()
{
 clrscr();
 long int basic,hra,ta,da,final;
 basic=20000;
 printf("basic=%ld\n",basic) ;
 hra=(basic*3)/100;
 printf("hra=%ld\n",hra) ;
 ta=(basic*12)/100;
 printf("ta=%ld\n",ta) ;
 da=(basic*5)/100;
 printf("da=%ld\n",da);
 final=basic+hra+ta+da;
 printf("final=%ld",final);
 getch();
 }
