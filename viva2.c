#include<stdio.h>
main()
{
	int a[10][10],i,j;
	printf("enter array elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("here is your array elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");	
	}
}
