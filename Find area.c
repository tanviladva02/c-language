#include<stdio.h>
#include<conio.h>
#define D 4
#define E 2
void main()
{
clrscr();
int a,b,c,ans;
printf("add a,b,c value");
scanf("%d %d %i",&a,&b,&c);
ans=((b*b)-(D*a*c))/(E*a);
printf("ans=%i",ans);
getch();
}