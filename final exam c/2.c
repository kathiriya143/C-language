#include<stdio.h>

void main()

{
	int r,c,i,j;
	int a[r][c],sum=0;
	
	printf("enter value r:");
	scanf("%d", &r);
	printf("enter value c:");
	scanf("%d", &c);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter value a[%d][%d]: " ,i,j);
			scanf("%d",& a[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum= sum+a[i][j];
		}
	}
	
	printf("sum of matrix = %d",sum);
	
	
	
}