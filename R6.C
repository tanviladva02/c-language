#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char choice;
 int a,b,ans;
 printf("A.add\nS.sub\nM.multi\D.divide\n");
 printf("enter your number");
 scanf("%c",&choice);
 printf("enter the value of a and b");
 fflush(stdin);
 scanf("%d %d",&a,&b);
 if(choice=='A')
 {
  ans=a+b;
  printf("ans=%d",ans);
 }
 else if(choice=='S')
 {
  ans=a-b;
  printf("ans=%d",ans);
 }
 else if(choice=='M')
 {
 ans=a*b;
  printf("ans=%d",ans);
 }
 else if(choice=='D')
 {
 ans=a/b;
  printf("ans=%d",ans);
 }
 else
 {
  printf("your number is unvalid");
 }

 getch();
}