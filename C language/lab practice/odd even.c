#include<stdio.h>
main()
{
	
	int n,month;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("No is Even : ",n);
	}
	else
	{
		printf("No is Odd : ",n);
	}
	
	printf("\nEnter a number between 1 and 12 to display the month : ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 :
			printf("January\n");
			break;
		case 2 :
			printf("February\n");
			break;
		case 3 :
			printf("March\n");
			break;
		case 4 :
			printf("April\n");
			break;
		case 5 :
			printf("May\n");
			break;
		case 6 :
			printf("June\n");
			break;
		case 7:
			printf("July\n");
			break;\
		case 8 :
			printf("August\n");
			break;
		case 9 :
			printf("September\n");
			break;
		case 10 :
			printf("october\n");
			break;
		case 11 :
			printf("November\n");
			break;
		case 12 :
			printf("December\n");
			break;
		default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
		}
}
