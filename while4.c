#include<stdio.h>

main()
{
	int i=100,n;
	printf("enter your starting series number\n");
	scanf("%d",&n);
	while(i>=n)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
		i--;
	}
}
