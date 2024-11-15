#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int number,ans,l,b,h,r;
 printf("1.circle\n2.rec\n3.triangle\n");
 printf("enter your number");
 scanf("%d",&number);
 if(number==1)
 {
  printf("enter r value");
  scanf("%d",&r);
  ans=(3.14*r*r);
  printf("ans=%i",ans);
 }
 else if(number==2)
 {
  printf("enter value of l&b");
  scanf("%d",&l,&h);
  ans=(l*h);
  printf("ans=%i",ans);
 }
 else if (number==3)
 {
  printf(" enter value of l&b");
  scanf("%d",&l,&b);
  ans=(l*b);
  printf("ans=%i",ans);
 }
 else
 {
  printf("invalide");
 }
 getch();
}