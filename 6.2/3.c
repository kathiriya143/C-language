# include <stdio.h>
# include <conio.h>

int main() {
    int a,b,c,mark ;
    
    printf("Enter maths marks: ");
    scanf("%d",&a);
    printf("Enter english marks: ");
    scanf("%d",&b);
    printf("Enter science marks: ");
    scanf("%d",&c);
    
    mark= (a+b+c)/3;
    printf("Average mark: %d\n",mark);
    
    
    if(mark>90 && mark<100)
    {
    	printf("A+");
	}
    else if(mark>=80 && mark<=89)
    {
    	printf("A");
	}
	else if(mark>=70 && mark<=79)
    {
    	printf("B+");
	}
	else if(mark>=60 && mark<=69)
    {
    	printf("B");
	}
	else if(mark>=50 && mark<=59)
    {
    	printf("C+");
	}
	else if(mark>=40 && mark<=49)
    {
    	printf("C");
	}
	else
    {
    	printf("your are faield");
	}
    
}

