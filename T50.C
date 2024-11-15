#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int eng,guj,eco,total,avg;
 printf("enter your marks:\n");
 scanf("%d %d %d",&eng,&guj,&eco);
 total=eng+guj+eco;
 printf("total=%d",total);
 avg=(total/3);
 printf("avg=%d",avg);
 if(avg>33&&avg<=50)
 {
  printf("gread=d");
 }
 else if(avg>50&&avg<=70)
 {
  printf("gread=c");
 }
  else if(avg>70&&avg<=90)
  {
   printf("gread=b");
  }
  else
  {
   printf("gread=a");
  }
 getch();
}