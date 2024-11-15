#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,ans;
 clrscr();
 printf("enter any number to make tables:");
 scanf("%d",&j);
      for(i=1;i<=10;i++)
      {
	ans=i*j;
	printf("%d*%d=%d\n",j,i,ans);
      }
 getch();
}