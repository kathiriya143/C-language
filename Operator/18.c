# include <stdio.h>
# include <conio.h>

void main()
{
	int x,y,ans;
	
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	
	ans = (x*x)+(y*y)+(2*x*y)*(x+y);
	
	printf("ans=%d",ans);
}
