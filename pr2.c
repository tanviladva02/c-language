#include<stdio.h>

main()
{
	float total,salary,hra,da,ta;
	printf("enter your salary\n");
	scanf("%f",&salary);
	hra=salary*0.1;
	da=salary*0.05;
	ta=salary*0.08;
	total=salary+hra+da+ta;
	printf("%.2f",total);
}
