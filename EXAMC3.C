#include<stdio.h>
#include<conio.h>
void main()
{
 long int unit,price,amount,tax,total;
 clrscr();
 printf("enter your unit");
 scanf("%ld",&unit);
 if(unit>=0)
 {
   if(unit>50)
   {
    if(unit>150)
    {
     if(unit>250)
    {
     price=0.50;
    }
    else
    {
     price=0.75;
    }
   }
   else
   {
    price=1.20;
   }
  }
   else
   {
    price=1.50;
   }
 }
  amount=(unit*price);
  printf("amount=%ld\n",amount);

  tax=(amount*20)/100;
  printf("tax=%d\n",tax);

  total=(amount+tax);
  printf("total=%ld\n",total);

 getch();
}