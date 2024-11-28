# include <stdio.h>
void main()
{
	int r,c,i,j;
	int a[r][c];
	
	printf("enetr r: ");
	scanf("%d",&r);
	printf("enetr c: ");
	scanf("%d",&c);
	
	for(i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("enetr value a[%d][%d]: ",i,j);
			scanf("%d 2",&a[i][j]);
		}
		printf("\n");
	}
}
