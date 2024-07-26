#include<stdio.h>
#include<conio.h>
void main()
{
	float f,c;
	
	printf("Enter the value in Celsius : ");
	scanf("%f",&c);
	
	f = (c*9/5)+32;
	
	printf("Fahrenheit : %.2f",f);
	
}
