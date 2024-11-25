#include <stdio.h>

void main() {
    int r, c,i,j;
    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    
    int a[r][c], transpose[c][r];
    
    for( i = 0; i < r; i++) 
	{
        for( j = 0; j < c; j++) 
		{
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for( i = 0; i < r; i++) 
	{
        for( j = 0; j < c; j++) 
		{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    for( i = 0; i < r; i++) 
	{
        for( j = 0; j < c; j++)
		{
            transpose[j][i] = a[i][j];
        }
    }
    
    printf("Transpose of the matrix is:\n");
    for( i = 0; i < c; i++) 
	{
        for( j = 0; j < r; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
}

