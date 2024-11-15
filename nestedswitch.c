#include<stdio.h>

main()
{
	int choice,r;
	printf("1.press 1 for English\n2.press 2 for Hindi\n3.press 3 for Gujarati\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			   printf("1.Press 1 for Internet Recharge\n2.Press 2 for Top-up Recharge\n3.Press 3 for Special Recharge\n");
               scanf("%d",&r);
               
               switch(r)
               {
               	     case 1:
               	     	    printf("you have sucessfully done Internet Recharge\n");
               	     	    break;
                     case 2:
               	     	    printf("you have sucessfully done Top-up Recharge\n");
               	     	    break;
                     case 3:
               	     	    printf("you have sucessfully done Specially Recharge\n");
               	     	    break;
               	     default:
						     printf("invalid choice");	    
			   }
               
			break;	
		case 2:
			   printf("1.Internet Recharge ke liye 1 dabaiye\n2.Top-up Recharge ke liye 2 dabaiye \n3.Special Recharge ke liye 3 dabaiye\n");
               scanf("%d",&r);
               
               switch(r)
               {
               	     case 1:
               	     	    printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
               	     	    break;
                     case 2:
               	     	    printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
               	     	    break;
                     case 3:
               	     	    printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
               	     	    break;
               	     default:
						     printf("invalid choice");	    
			   }
               
		    break;
		case 3:
			   printf("1.Internet Recharge mate 1 dabavo\n2.Top-up Recharge mate 2 dabavo\n3.Special Recharge mate 3 dabavo\n");
               scanf("%d",&r);
               
               switch(r)
               {
               	     case 1:
               	     	    printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
               	     	    break;
                     case 2:
               	     	    printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
               	     	    break;
                     case 3:
               	     	    printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
               	     	    break;
               	     default:
						     printf("invalid choice");	    
			   }
               
		    break;	 
		default:
				printf("invalid choice");	     
			   	   
	}
	
}
