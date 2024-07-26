#include<stdio.h>

void main()
{
	int  salary,HRA,DA,TA,T1,a;
	
	printf("Enter the Base Salary : ");
	scanf("%d",&salary);
	
	printf("Enter the HRA = ");
	scanf("%d",&HRA);
	
	printf("Enter the DA = ");
	scanf("%d",&DA);
	
	printf("Enter the TA = ");
	scanf("%d",&TA);
	
	


	HRA = (salary * HRA) / 100;
	DA = (salary * DA)/ 100;
	TA = (salary * TA/ 100;
	
	T1=HRA+DA+TA;
	
	a=T1+salary;
	
	printf("gross = %d",a);

}
