#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int choice,r,l,h,b,area;
 printf("1.circle\n2.rectangle\n3.triangle:");
 scanf("%d",&choice);
 if(choice==1)
 {
  printf("enter the value of r:");
  scanf("%d",&r);
  area=3.14*r*r;
  printf("area=%d\n",area);
 }
 else if(choice==2)
 {
  printf("enter the value of l and h:");
  scanf("%d %d",&l,&h);
  area=l*h;
  printf("area=%d\n",area);
 }
 else if(choice==3)
 {
   printf("enter the value of l and b:");
   scanf("%d %d",&l,&b);
   area=l*b;
   printf("area=%d\n",area);
 }
 getch();
}