#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,ans;
 char choice;
 printf("A.addition\nS.substraction\nM.multiple\nD.divide\n");
 printf("enter your choice");
 scanf("%c",&choice);
 printf("enter the value of a and b");
 scanf("%d %d",&a,&b);
 switch (choice)
 {
  case 'A':
	  ans=a+b;
	  printf("ans=%d",ans);
	  break;
  case 'S':
	  ans=a-b;
	  printf("ans=%d",ans);
	  break;
  case 'M':
	  ans=a*b;
	  printf("ans=%d",ans);
	  break;
  case 'D':
	  ans=a/b;
	  printf("ans=%d",ans);
	  break;
  default:
	 printf("invalid choice");
	 break;
 }
 getch();
}