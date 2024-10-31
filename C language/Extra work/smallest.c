#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	printf("Enter number 3:");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3)// n1 ,n2 and n3 gretest n1 so exicute
	{
		printf("%d is largest.",n1);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("%d is largest.",n2);
	}
	else
	{
		printf("%d is largest.",n3);
	}
	
	if(n1<n2 && n1<n3)// n1 ,n2 and n3 gretest n1 so exicute
	{
		printf("\n%d is smallest.",n1);
	}
	else if(n2<n1 && n2<n3)
	{
		printf("\n%d is smallest.",n2);
	}
	else
	{
		printf("\n%d is smallest.",n3);
	}
}
