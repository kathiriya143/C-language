#include <stdio.h>

void main() {
    int r,c,i,j;
    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    
    int a[r][c];
    
	    for ( i = 0; i < r; i++) 
		{
        for ( j = 0; j < c; j++) 
		{
            printf("Enter element at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    int rIndex, cIndex;
    printf("Enter the r number for sum: ", r - 1);
    scanf("%d", &rIndex);
    printf("Enter the c number for sum ", c - 1);
    scanf("%d", &cIndex);
    
    int rSum = 0;
    for ( j = 0; j < c; j++) 
	{
        rSum += a[rIndex][j];
    }

    int cSum = 0;
    for ( i = 0; i < r; i++) 
	{
        cSum += a[i][cIndex];
    }
    
    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++) 
		{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Sum of elements in r %d: %d\n", rIndex, rSum);
    printf("Sum of elements in c %d: %d\n", cIndex, cSum);
    
}

