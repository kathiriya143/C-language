#include <stdio.h>

void  main() {
    int r,c,i,j ;
    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    
    int a[r][c];
    
    for( i = 0; i < r; i++) 
	{
        for( j = 0; j < c; j++) 
		{
            printf("Enter element at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    int largest = a[0][0];
    
    for( i = 0; i < r; i++) 
	{
        for( j = 0; j < c; j++) 
		{
            if(a[i][j] > largest) 
			{
                largest = a[i][j];
            }
        }
    }
    

    printf("The largest element is: %d\n", largest);
    
}

