#include<stdio.h>
#include<conio.h>
void cir();
void tri();
void rec();
void main()
{
 int choice;
 char op;
 clrscr();
 do
 {
  printf("1.cir\n2.tri\n3.rec\n:");
  scanf("%d",&choice);

  switch(choice)
  {
   case 1:
	 cir();
	 break;
   case 2:
	 tri();
	 break;
   case 3:
	 rec();
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
 void cir()
 {
  int r,area;
  printf("enter the value of r:");
  scanf("%d",&r);
  area=3.14*r*r;
  printf("area=%d\n",area);
 }

 void tri()
 {
  int l,h,area;
  printf("enter the value of l and h:");
  scanf("%d %d",&l,&h);
  area=l*h;
  printf("area=%d\n",area);
 }

 void rec()
 {
  int l,b,area;
  printf("enter the value of l and b:");
  scanf("%d %d",&l,&b);
  area=l*b;
  printf("area=%d\n",area);
 }