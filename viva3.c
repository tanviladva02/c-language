#include<stdio.h>

main()
{
	int roll_number,name,m1,m2,m3,m4,per;
	printf("enter your roll number:\n");
	scanf("%d",&roll_number);
	printf("enter your name:\n");
	scanf("%d",&name);	
	fflush(stdin);
	printf("enter your 4 sub marks:\n");
	scanf("%d %d %d %d",&m1,&m2,&m3,&m4);
	
	per=(m1+m2+m3+m4/400);
	
	if(per >= 70)
	{
		printf("your class is distinction\n");
	}
	else if(per >= 60 && per < 70)
	{
		printf("your class is first\n");
	}
	else if(per >= 50 && per < 60)
	{
		printf("your class is second\n");
	}
	else if(per >= 40 && per < 50)
	{
		printf("your class is pass\n");
	}
	else
	{
		printf("alas ! you are fail\n");
	}

}
