#include<stdio.h>
#include<conio.h>
void dtor();
void ctof();
void mtokm();
void main()
{
 int choice;
 char op;
 clrscr();
 do
 {
  printf("1.dtor\n2.ctof\n3.mtokm\n:");
  scanf("%d",&choice);

  switch(choice)
  {
   case 1:
	 dtor();
	 break;
   case 2:
	 ctof();
	 break;
   case 3:
	 mtokm();
	 break;

   default :
	  printf("invalid number:");
   }
  printf("if you want another opration plz type Y & y:");
  fflush(stdin);
  scanf("%c",&op);
  }while(op=='Y');
 }
 getch();
 void dtor()
 {
  int d,r;
  printf("enter the value r:");
  scanf("%d",&r);
  d=r/82;
  printf("d=%d\n",d);
 }

 void ctof()
 {
  int c,f;
  printf("enter the value of c:");
  scanf("%d",&c);
  f=(c*1.8)+32;
  printf("f=%d\n",f);
 }

 void mtokm()
 {
  int m,km;
  printf("enter the value of m:");
  scanf("%d",&m);
  km=m/1000;
  printf("km=%d\n",km);
 }
