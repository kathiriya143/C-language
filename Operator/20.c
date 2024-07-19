# include <stdio.h>
# include <conio.h>

void main()
{
	int x,y;
	
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	y=y-x;
	x=x+x;
	printf("x=%d\n",x);
	printf("y=%d",y);
	
}
