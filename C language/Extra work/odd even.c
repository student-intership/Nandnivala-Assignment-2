#include<stdio.h>
main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("Number is even: %d",n);
	}
	else
	{
		printf("Number is odd: %d",n);
	}
}
