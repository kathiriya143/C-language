#include<stdio.h>


  int add (int num1,int num2)
  
  {
  	
  	int add;
  	add=num1+num2;
  	return add;
  }
  
  int sub(int num1, int num2)
  {
     
	 int sub;
	 sub=num1-num2;
	 return sub;
	 	
  	
  }
  
  int multiply(int num1,int num2)
  {
  	
  	int multiply;
  	multiply=num1*num2;
  	return multiply;
  	
  }
  
  int div(int num1,int num2)
  {
  	
  	int div;
  	div=num1/num2;
  	return div;
  	
  }
  
  int module(int num1,int num2)
  
{
	
	int module;
	module=num1%num2;
	return module;
	
}

int main()

{


	  int num1,num2,choice;
            
            printf("enter number-1: ");
            scanf("%d",&num1);
            printf("enter number-2: ");
            scanf("%d",&num2);
			            
            printf("enter your choice 1:+ \n");
            printf("enter your choice 2:- \n");
            printf("enter your choice 3:* \n");
            printf("enter your choice 4:/ \n");
            printf("enter your choice 5:% \n");
            printf("enter your choice: ");
            scanf("%d",&choice);
            
            if(choice==1)
            {
            	  printf("the addition is %d",add(num1,num2));
			}
			else if (choice==2)
            {
            	  printf("the subraction is %d",sub(num1,num2));
			}
			else if (choice==3)
			{
            	  printf("the multiplication is %d",multiply(num1,num2));
			}
			else if (choice==4)
			{
            	  printf("the division is %d",div(num1,num2));
			}
			else if (choice==5)
			{
            	  printf("the module is %d",module(num1,num2));
			}
			else
			{
				  printf("enter valid value:");
			}
			
			return 0;
            
}
