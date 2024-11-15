#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int unit,price,amount,tax,total;
 printf("enter your unit:");
 scanf("%ld",&unit);
 if(unit>0&&unit<=500)
 {
  price=5;
 }
 else if(unit>500&&unit<=1000)
 {
  price=6;
 }
 else if(unit>1000&&unit<=5000)
 {
  price=7;
 }
 else
 {
  price=8;
 }
 amount=(unit*price);
 printf("amount=%ld\n",amount);
 tax=(amount*20)/100;
 printf("tax=%ld\n",tax);
 total=(amount+tax);
 printf("total=%ld\n",total);
 getch();
}