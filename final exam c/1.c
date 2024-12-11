#include<stdio.h>

void main()

{
	float a,b,c ;
	
	printf("enter the value a : ");
	scanf("%f", &a);
	
	printf("enter the value c : ");
	scanf("%f", &c);
	
	b =180-(a+c);
	
	printf("the angle  of triangle %f %f %f " , a, b, c);
}