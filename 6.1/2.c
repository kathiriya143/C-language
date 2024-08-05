# include <stdio.h>
# include <conio.h>

void main()
{
    int a,b;
    printf ("Press 1 for English");
    printf ("\nPress 2 for Hindi");
    printf ("\nPress 3 for Gujarati\n \n");
    
    printf("Enter your choice: ");
    scanf("%d",&a);
    
    switch(a)
    {
    	case 1: printf("English \n \n ");
    	
    		printf ("Press 1 for Internet Recharge");
    		printf ("\nPress 2 for Top-up Recharge");
    		printf ("\nPress 3 for Special Recharge\n \n");
    
    		printf("Enter your choice: ");
    		scanf("%d",&b);
    		switch(b)
    		{
    			case 1: printf("You have successfully done a Internet Recharge.");
    			break;
    			case 2: printf("You have successfully done a Top-up Recharge.");
    			break;
    			case 3: printf("You have successfully done a Special Recharge.");
    			break;
    			default: printf("invelld input");
			}
    	break;
    	case 2: printf("Hindi \n \n ");
    		printf ("Internet Recharge ke liye 1 dabaiye");
    		printf ("\nTop-up Recharge ke liye 2 dabaiye");
    		printf ("\nSpecial Recharge ke liye 3 dabaiye\n \n");
    
    		printf("Enter your choice: ");
    		scanf("%d",&b);
    		switch(b)
    		{
    			case 1: printf("Aapne safaltapurvak Internet Recharge kar liya he.");
    			break;
    			case 2: printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
    			break;
    			case 3: printf("Aapne safaltapurvak Special Recharge kar liya he.");
    			break;
    			default: printf("invelld input");
			}
    	break;
    	case 3: printf("Gujarati\n \n ");
    		printf ("Internet Recharge mate 1 dabavo");
    		printf ("\nTop-up Recharge mate 2 dabavo");
    		printf ("\nSpecial Recharge mate 3 dabavo\n \n");
    
    		printf("Enter your choice: ");
    		scanf("%d",&b);
    		switch(b)
    		{
    			case 1: printf("Tame safaltapurvak Internet Recharge karyu chhe.");
    			break;
    			case 2: printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
    			break;
    			case 3: printf("Tame safaltapurvak Special Recharge karyu chhe.");
    			break;
    			default: printf("invelld input");
			}
    	break;
    	
    	default: printf("invelld input");
	}
    
}
