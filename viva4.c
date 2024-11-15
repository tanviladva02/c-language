#include<stdio.h>

main()
{
	float n1,n2,n3;
	printf("enter any 3 float number:\n");
	scanf("%f %f %f",&n1,&n2,&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("n1 is greater\n");
		}
		else
		{
			printf("n3 is greater\n");
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("n2 is greater\n");
		}
		else
		{
			printf("n3 is greater\n");
		}
	}
}
