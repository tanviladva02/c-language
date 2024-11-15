#include<stdio.h>

main()
{
	int number;
	
	printf("enter the number you want to check\n");
	scanf("%d",&number);
	
	(number%2==1)?printf("number is odd"):printf("number is even"); 
}
