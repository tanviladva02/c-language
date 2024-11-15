#include<stdio.h>

main()
{
	float p_amount,disc,payment;
	printf("enter your purchasing amount:\n");
	scanf("%f",&p_amount);
	
	if(p_amount <= 1000)
	{
		payment=p_amount;
	}
	else if(p_amount<1001 && p_amount>5000)
	{
		payment=p_amount-(p_amount*0.1);
	}
	else
	{
		payment=p_amount-(p_amount*0.2);
	}
	printf("your final payment is %f ",payment);
}
