# include <stdio.h>
void main()
{
	int a,b,i;
	printf("star num a: ");
	scanf("%d",&a);
	printf("stop num b: ");
	scanf("%d",&b);
	
	for(i=a; i>=b; i--)
	{
		printf("%d\n",i);
	}
	
	
}
