#include<stdio.h>

main()
{
	int m,n;
	printf("enter any two year\n");
	scanf("%d %d",&m,&n);
	
	while(m<=n)
	{
			printf("leap year are %d\n",m);
			m=m+4;
	}
}
