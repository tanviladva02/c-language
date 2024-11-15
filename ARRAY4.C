#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,n,odd=0,even=0;
 printf("how many records you want to inssert in array:\n");
 scanf("%d",&n);
 printf("enter your record\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i]%2==1)
  {
   odd++;
  }
  else
  {
   even++;
  }
 }
 printf("odd number=%d\n",odd);
 printf("even number=%d",even);
 getch();
}