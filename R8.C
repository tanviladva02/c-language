#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int ans,l,b,h,r;
 char number;
 printf("C.circle\nR.rec\nT.triangle\n");
 printf("enter your number");
 scanf("%c",&number);
 if(number=='C')
 {
  printf("enter r value");
  scanf("%d",&r);
  ans=(3.14*r*r);
  printf("ans=%i",ans);
 }
 else if(number=='R')
 {
  printf("enter value of l&b");
  scanf("%d",&l,&h);
  ans=(l*h);
  printf("ans=%i",ans);
 }
 else if (number=='T')
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