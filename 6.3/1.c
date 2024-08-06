# include <stdio.h>
void main()
{
	int a,b,c;
	
	printf("Enter  value of a: ");
    scanf("%d",&a);
    printf("Enter  value of b: ");
    scanf("%d",&b);
    printf("Enter  value of c: ");
    scanf("%d",&c);
    
    if(a>b)
    {
    	if(a>c)
    	{
    		printf("a in max");
		}
		else
		{
			printf("b is max");
		}
	}
	else
	{
		if(b>c)
    	{
    		printf("b in max");
		}
		else
		{
			printf("c is max");
		}
	}
}
