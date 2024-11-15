#include<stdio.h>
#include<conio.h>
void main()
{
 float r,l,b,h,area;
 int choice;
 clrscr();
 printf("1.circle\n2.rectangle\n3.triangle:");
 scanf("%d",&choice);
 if(choice==1)
 {
  printf("enter the value of r:");
  scanf("%f",&r);
  area=3.14*r*r;
  printf("area=%f\n",area);
 }
 else if(choice==2)
 {
  printf("enter the value of l and h:");
  scanf("%f %f",&l,&h);
  area=l*h;
  printf("area=%f\n",area);
 }
 else if(choice==3)
 {
   printf("enter the value of l and b:");
   scanf("%f %f",&l,&b);
   area=l*b;
   printf("area=%f\n",area);
 }
 else
 {
  printf("invalid number:");
 }
 getch();
}