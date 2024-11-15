#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10][10];
 int i,j,m,n,odd=0,even=0;
 printf("how many row you want\n");
 scanf("%d",&n);
 printf("how many col you want\n");
 scanf("%d",&m);
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("enter your value:");
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]%2==1)
   {
    odd++;
   }
   else
   {
    even++;
   }
  }
 }
 printf("here is your odd data:%d\n",odd);
 printf("here is your even data:%d\n",even);
 getch();
}