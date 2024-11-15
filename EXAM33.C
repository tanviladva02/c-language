//take something & return nothing
#include<stdio.h>
#include<conio.h>
 float cone(float);
 float sphere(float);
 float ellipse(float);
  void main()
  {
    int choice;
    float r,l,h,a,b,ans;
    clrscr();
    printf("1.cone\n2.sphere\n3.ellipse\n");
    scanf("%d",&choice);
    switch(choice)
     {
	case 1:
		printf("enter the value of r,l and h:");
		scanf("%f %f %f",&r,&l,&h);
		ans=cone(r);(l);(h);
		printf("ans=%f",ans);
		break;
	case 2:
		 printf("enter the value of r:");
		 scanf("%f",&r);
		 ans=sphere(r);
		 printf("ans=%f",ans);
		 break;
	case 3:
		 printf("enter the value of a and b:");
		 scanf("%f %f",&a,&b);
		 ans=ellipse(a);(b);
		 printf("ans=%f",ans);
		 break;

     }
    getch();
  }
   float cone(float ans)
  {
   float r,l,h;
   ans=3.14*r*(l+h);
   return ans;
  }

   float sphere(float r)
  {
   float ans;
   ans=4*3.14*r*r;
   return ans;
  }
  float ellipse(float ans)
 {
  float a,b;
  ans=3.14*a*b;
  return ans;
 }
