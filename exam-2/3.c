# include <stdio.h>
void  mult()
{
	int n,i,sum;
	
	printf ("enetr multiplication table ; " );
	scanf("%d",&n);
	
	for (i=1; i<=10; i++)
	{
		sum=n*i;
		printf("%d * %d = %d \n", n ,i ,sum );
	}

}
void main()
{
	mult();
}
