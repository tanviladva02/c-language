#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
  int s1,s2,s3,total,avg,gread;
  printf("enter your marks:\n");
  scanf("%i %i %i",&s1,&s2,&s3);
  total=s1+s2+s3;
  printf("total=%i\n",total);
  avg=total/3;
  printf("avg=%i\n",avg);
  if(avg>=33)
  {
   if (avg>=50)
   {
     if(avg>=80)
     {
      if(avg>=90)
      {
       printf("you have a gread\n");
      }

     }
     else
     {
      printf("you have b gread\n");
     }

   }
   else
   {
    printf("you have c gread\n");
   }

  }
  else
  {
   printf("you are fail\n");
  }
 getch();
}