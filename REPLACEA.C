#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10],i,n,search,replace;
 printf("how many records are insert in array:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("which records would you find");
 scanf("%d",&search);
 printf("which records would you replace");
 scanf("%d",&replace);
 for(i=0;i<search;i++)
 {
  if(a[i]==search)
  {
   search=i;
  }
 }
 printf("%d=found %d=position\n",i,search);
 printf("%d=found %d=position\n",i,replace);
 for(i=0;i<search;i++)
 {
   if(a[i]==search)
   {
   search=a[i];
   }
 }
 a[i]=replace;
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }
 getch();
}









