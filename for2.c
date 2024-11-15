#include<stdio.h>

main()
{
	int a=0,b=1,c,i,n;
	printf("enter any number\n");
	scanf("%d",&n);
	
	printf("%d %d ",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;	
	}
}
