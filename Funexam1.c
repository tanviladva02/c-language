#include<stdio.h>
#include<conio.h>
float mtofeet(float);
float ctof(float);
float dtoru(float);
void main()
{
 int choice;
 float m,c,r,ans;
 clrscr();
 printf("1.m to feet\n2.c to f\n3.d to ru\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
	printf("enter m value");
	scanf("%f",&m);
	ans=mtofeet(m);
	printf("ans=%f",ans);
	break;
  case 2:
	printf("enter c value");
	scanf("%f",&c);
	ans=ctof(c);
	printf("ans=%f",ans);
	break;
  case 3:
	printf("enter r value");
	scanf("%f",&r);
	ans=dtoru(r);
	printf("ans=%f",ans);
	break;
      }
      getch();
    }
   float mtofeet(float m)
   {
     float ans;
     ans=(m*3.28);
     return ans;
   }
   float ctof(float c)
   {
     float ans;
     ans=(c*1.8)+32;
     return ans;
   }
   float dtoru(float r)
   {
     float ans;
     ans=r/82;
     return ans;
   }

