#include<stdio.h>
main()
{
	int n;
	printf("enter no:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("this no is positive.");
	}
	else if(n<0)
	{
		printf("this no is negative.");
	}
	else
	{
		printf("this no is zero.");
	}
}
