#include<stdio.h>
main()

{
	int i;
	
	printf("using for loop : \n ");
	for(i = 1; i <= 10; i++)
	{
		printf("\n%d",i);
	}
	printf("\n");
	
	printf("using while loop : \n");
	i=1;
	while(i<=10)
	{
		printf("\n%d",i);
		i++;
	}
	printf("\n");
	
	printf("using do while loop : \n");
	i=1;
	do
	{
		printf("\n%d",i);
		i++;
	}
	while(i<=10);
	printf("\n");
}
