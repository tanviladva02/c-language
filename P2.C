#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,d;
 printf("enter the value of a,b,c,d:");
 scanf("%i %i %i %i",&a,&b,&c,&d);
 if(a>b)
 {
  if(a>c)
  {
    if(a>d)
     {
       printf("a is greatter\n");
     }
  else
  {
    printf("d is greatter\n");
  }
  }
  else
   {
     if(c>d)
     {
      printf("c is greatter\n");
     }
     else
     {
      printf("d is greatter\n");
     }
    }
  }
 else
 {
   if(b>c)
   {
     if (b>d)
     {
      printf("yes, b is greater\n");
     }
     else
     {
     printf("yes,d is greater\n");
     }
   }
   else
   {
     if(c>d)
     {
      printf("yes,c is greater\n");
     }
     else
     {
      printf("d is greater\n");
     }
   }
 }


if(a<b)
 {
  if(a<c)
  {
    if(a<d)
     {
       printf("a is smaller\n");
     }
  else
  {
    printf("d is smaller\n");
  }
  }
  else
   {
     if(c<d)
     {
      printf("c is smaller\n");
     }
     else
     {
      printf("d is smaller\n");
     }
    }
  }
 else
 {
   if(b<c)
   {
     if (b<d)
     {
      printf("yes, b is smaller\n");
     }
     else
     {
     printf("yes,d is smaller\n");
     }
   }
   else
   {
     if(c<d)
     {
      printf("yes,c is smaller\n");
     }
     else
     {
      printf("d is smaller\n");
     }
   }
}
getch();
}