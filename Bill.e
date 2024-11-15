#include<stdio.h>
#include<conio.h>
void main()
{ clrscr();
int unit,price,amount,tax,pay;
unit=100,price=10;
amount=unit*price;
printf("amount=%i\n",amount);
tax=(amount*5)/100;
printf("tax=%i\n",tax);
pay=amount+tax;
printf("your bill is =%i\n",pay);
getch();
}








