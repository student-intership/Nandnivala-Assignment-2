#include<stdio.h>
//prime no is divied by itself and onlu one 
main()
{
	int i,n,c=0;
	
	printf("Enter no :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)//prime no logic
		{
			c++;
		}
	}
	if(c==2)//valid of 2 time divide by prime no
	{
		printf("%d is prime.",n);
	}
	else
	{
		printf("%d is not prime.",n);
	}
}
