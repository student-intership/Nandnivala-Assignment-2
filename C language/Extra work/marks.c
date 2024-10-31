#include<stdio.h>
main()

{
	//check pass or fail
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	if(n > 90) 
	{
		printf("%d is : Grade A",n);
	}
	else if(n > 75 && n <= 90)
	{
		printf("%d is : Grade B",n);
	}
	else if(n > 50 && n<= 75)
	{
		printf("%d is : Grade C",n);
	}
	else if(n >= 40)
	{
		printf("%d is :Grade D",n);
	}
	else
	{
		printf("%d is Fail.",n);
	}
}
