#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 char day;
 printf("M.monday\nT.tuesday\nW.wednesday\nt.thursday\nF.friday\nS.saturday\ns.sunday\n");
 printf("enter your day");
 scanf("%c
 ",&day);
 switch(day)
 {
  case'M':
	   printf("monday");
	   break;
  case'T':
	   printf("tuesday");
	   break;
  case'W':
	   printf("wednesday");
	   break;
  case't':
	   printf("thursday");
	   break;
  case'F':
	   printf("friday");
	   break;
  case'S':
	   printf("saturday");
	   break;
  case's':
	   printf("sunday");
	   break;
  default:
	  printf("invalid char");
	  break;

 }
 getch();
}