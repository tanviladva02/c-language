//take nothing & return nothing
#include<stdio.h>
#include<conio.h>
void square();
void cube();
void main()
{
 clrscr();
 int choice;
 printf("1.square\n2.cube\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
	 square();
	 break;
  case 2:
	cube();
	break;
  default:
	 printf("invalid choice");
 }
 getch();
}

void square()
{
 int n,ans;
 printf("enter the value of n:");
 scanf("%d",&n);
 ans=n*n;
 printf("ans=%d",ans);
}

void cube()
{
 int t,ans;
 printf("enter the value of t:");
 scanf("%d",&t);
 ans=t*t*t;
 printf("ans=%d",ans);
}