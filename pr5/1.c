#include<stdio.h>
void main()
{
	int n,i;
	int a[n];
	
	printf("enter size of array: ");
	scanf ("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("enter number a[%d] : ", i);
		scanf ("%d", &a[i]);
	}
	printf("Negative elements in the array are:  \n");
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("%d,", a[i]);
		}
	}
	
}
