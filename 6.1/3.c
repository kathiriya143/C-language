# include <stdio.h>
# include <conio.h>

int main() {
    int a,b,c ;
    
    printf("Enter a,b,c numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    
    
    (a<b)?
    	(a<c)?
    	printf("a is min")
    	:printf("c is min")
    
    :
    	(b<c)?
    	printf("b is min")
    	
    	:printf("c is min");
    
}

