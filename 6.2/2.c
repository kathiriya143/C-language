# include <stdio.h>
# include <conio.h>

int main() {
    int a,b ;
    
    printf("Enter a numbers: ");
    scanf("%d",&a);
    
    if(a>0)
    {
    	printf("This number is Positive");
	}
    else if(a==0)
    {
    	printf("This number is Neutral");
	}
	else
    {
    	printf("This number is Negative");
	}
    
}

