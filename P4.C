#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int unit,price,amount,tax,total;
 printf("enter your units");
 scanf("%ld",&unit);
 if(unit>=0)
 {
  if(unit>=100)
  {
    if(unit>=500)
    {
       if(unit>=1000)
       {
	if(unit>=5000)
	{
	 if(unit>=10000)
	 {
	  price=9;
	 }
	}
	else
	{
	 price=8 ;
	}
       }
       else
       {
	price=7;
       }
    }
    else
    {
     price=6;
    }
  }
  else
  {
    price=5;
  }
 }
 else
 {
  price=0 ;
 }
 amount=unit*price;
 printf("amount=%ld\n",amount);
 tax=(amount*20)/100;
 printf("tax=%ld\n",tax);
 total=amount+tax;
 printf("total=%ld\n",total);
 getch();
}