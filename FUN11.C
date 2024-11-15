#include<stdio.h>
#include<conio.h>
void add();
void sub();
void mul();
void div();
void main()
{
 int choice;
 char op;
 clrscr();
 do
 {
  printf("1.add\n2.sub\n3.mul\n4.div\n:");
  scanf("%d",&choice);

  switch(choice)
  {
   case 1:
	 add();
	 break;
   case 2:
	 sub();
	 break;
   case 3:
	 mul();
	 break;
   case 4:
	 div();
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
 void add()
 {
  int a,b,ans;
  printf("enter the value of a and b:");
  scanf("%d %d",&a,&b);
  ans=a+b;
  printf("ans=%d\n",ans);
 }

 void sub()
 {
  int a,b,ans;
  printf("enter the value of a and b:");
  scanf("%d %d",&a,&b);
  ans=a-b;
  printf("ans=%d\n",ans);
 }

 void mul()
 {
  int a,b,ans;
  printf("enter the value of a and b:");
  scanf("%d %d",&a,&b);
  ans=a*b;
  printf("ans=%d\n",ans);
 }
 void div()
 {
  int a,b,ans;
  printf("enter the value of a and b:");
  scanf("%d %d",&a,&b);
  ans=a/b;
  printf("ans=%d\n",ans);
 }