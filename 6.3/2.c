# include <stdio.h>
void main()
{
	int a,b,c,d;
	
	printf("Enter  value of a: ");
    scanf("%d",&a);
    printf("Enter  value of b: ");
    scanf("%d",&b);
    printf("Enter  value of c: ");
    scanf("%d",&c);
    printf("Enter  value of d: ");
    scanf("%d",&d);
    
    //a,b,c,d
    if(a>b)
    {
    	//a,c,d
    	if(a>c)
    	{
    		//a,d
    		if(a>d)
    		{
    			printf("a is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			if(c>d)
    		{
    			printf("c is max");
			}
			else
			{
				printf("d is max");
			}
		}
	}
	else
	{
		if(b>c)
    	{
    		//a,d
    		if(b>d)
    		{
    			printf("b is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			if(c>d)
    		{
    			printf("c is max");
			}
			else
			{
				printf("d is max");
			}
		}
	}
}
