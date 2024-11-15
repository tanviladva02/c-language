#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int guj,hindi,eng,total,avg;
 printf("enter guj , hindi & eng marks\n");
 scanf("%d %d %d",&guj,&hindi,&eng);
 total=(guj+hindi+eng);
 printf("total=%d\n",total);
 avg=(total/3);
 printf("avg=%d\n",avg);
 if(avg>=33)
 {
  if(avg>=50)
  {
   if(avg>=70)
   {
    if(avg>=90)
    {
     printf("you have A greade:-)\n");
    }
    else
    {
     printf("you have B greade\n");
    }
   }
   else
   {
    printf("you have C greade\n");
   }
  }
  else
  {
   printf("you have D greade\n");
  }
 }
 else
 {
  printf("you are fail :-(\n");
 }

 getch();

}