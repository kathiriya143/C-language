#include<stdio.h>

int main()
 {
	int a,b,c, sum;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	c=a%10;
	
	 b = a;
	while(b>=10)
	
		{
		    b/=10;
	    }

    sum =b+c;

    printf("Sum of first or last digit : %d\n", sum);
}
