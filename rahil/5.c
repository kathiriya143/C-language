# include <stdio.h>
void main()
{
	int a;
	printf("enter the value of a: ");
	scanf("%d",&a);
	
	 int ld=a/10;
	while(a<9)
	{
		a/10;
	}
	
	
	printf(" first number = %d\n",a);
	printf("last number = %d",ld);

	
	
}
