#include<stdio.h>

main()
{
	int unit;
	float rate,amount,charge,totalbill;
	
	printf("enter your unit\n");
	scanf("%d",&unit);
	
	if(unit<50)
	{
		rate=0.50;
	}
	else if(unit <= 50 && unit > 150)
	{
		rate=0.75;
	}
	else if(unit <= 150 && unit > 250)
	{
		rate=1.20;
	}
	else if(unit >= 250)
	{
		rate=1.50;
	}
	
	amount=unit*rate;
	charge=(amount*20)/100;
	totalbill=amount+charge;
	printf("total bill is %.2f",totalbill);
}
