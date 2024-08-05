# include <stdio.h>
# include <conio.h>

int main() {
    int a,b,c ;
    
    printf("Enter a,b,c numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    
    
    (a>b)?
    	(a>c)?
    	printf("a is max")
    	:printf("c is max");
    
    :
    	(b>c)?
    	printf("b is max")
    	
    	:printf("c is max");
    
}

