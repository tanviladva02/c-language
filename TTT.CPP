#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int age;
 printf ("enter your age");
 scanf("%i",&age);
 if(age>=18)
 {
   printf("you are mature for voting");
 }
 else
 {
  printf("you are not enough mature for voting");
  }




 getch();
}