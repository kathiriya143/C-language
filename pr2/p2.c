# include <stdio.h>
void main()
{
    char grade;
    int score;
     
     printf("enter the score: ");
     scanf("%d",&score);
     
     grade= (score>=90 && score<=100)?'A'
	 : (score>=80 && score<90)?'B'
	 :(score>=70 && score<80)?'C'
	 :(score>=60 && score<70)?'D'
	 :(score>=40 && score<60)?'E'
	 :'F';
	 
	 printf("Your grade is : %c \n\n\n",grade);
	 
	 switch(grade)
	 {
	 	case 'A' : printf("Excellent work!.");
	 	break;
	 	
	 	case 'B' : printf("Well done.");
	 	break;
	 	
	 	case 'C' : printf("Good job");
	 	break;
	 	
	 	case 'D' : printf("You passed");
	 	break;
	 	
	 	case 'E' : printf("You passed");
	 	break;
		 	 	
	 	case 'F' : printf("Sorry, you failed");
	 	break;
	 	
	 }
	 
	if(grade=='A' || grade=='B'|| grade=='C' ||grade=='D' || grade=='E' )
	{
		printf("You are eligible for the next level!");
	}
	else
	{
		printf("Please Try Again next time !");
	}

	 
	 
	 
	 
     
}
	
