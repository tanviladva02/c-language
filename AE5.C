#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],i,j,row,col,odd=0,sum=0;
  clrscr();
  printf("how many row you want:");
  scanf("%d",&row);
  printf("how many colum you want:");
  scanf("%d",&col);
  for(i=0;i<row;i++)
  {
   for(j=0;j<col;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<row;i++)
  {
   for(j=0;j<col;j++)
   {
    if(a[i][j]%2==1)
    {
      sum=sum+a[i][j];
    }
   }
  }
  printf("sum of all odd number=%d",sum);
 getch();
}