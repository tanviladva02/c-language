#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,choice,ans;
 printf("1.add\n2.sub\n3.multi\4.divide\n");
 printf("enter your number");
 scanf("%d",&choice);
 printf("enter the value of a and b");
 scanf("%d %d",&a,&b);
 if(choice==1)
 {
  ans=a+b;
  printf("ans=%d",ans);
 }
 else if(choice==2)
 {
  ans=a-b;
  printf("ans=%d",ans);
 }
 else if(choice==3)
 {
 ans=a*b;
  printf("ans=%d",ans);
 }
 else if(choice==4)
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