#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int number,ans,r,l,h,b;
 printf("1.circle\n2.rectangle\n3.triangle\n");
 printf("enter your number:");
 scanf("%d",&number);
 if(number==1)
 {
  printf("enter the value of r");
  scanf("%d",&r);
  ans=(3.14*r*r);
  printf("ans=%d",ans);
 }
   else if(number==2)
  {
   printf("enter the value of l & h");
   scanf("%d %d",&l,&h);
   ans=(l*h);
   printf("ans=%d",ans);
  }
   else if(number==3)
  {
   printf("enter the value of l & b");
   scanf("%d %d",&l,&b);
   ans=(l*b);
   printf("ans=%d",ans);
  }
   else
  {
   printf("invalid number");
  }
 getch();
}
