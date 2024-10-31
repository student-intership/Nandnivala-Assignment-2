#include<stdio.h>
main()
{
	//store e integer in user 
	
	int arr[5];//array declaration
	int i;
	
	printf("Enter A Number : ");
    scanf("%d",&arr[5]);
	
	for(i=1;i<=5;i++)//loop 
	{
		printf("%d\n",i);
	}
	
	int a[3][3],b[3][3];
	int j,k;
	
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			printf("Enter number : [%d] - [%d] :",j,k);
			scanf("%d",&a[j][k]);
		}
	}
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			printf("%d\t",a[j][k]);
		}
		printf("\n");
	}
	printf("\n******************************************************\n");
	
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			printf("Enter number : ");
			scanf("%d",&b[j][k]);
		}
	}
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			printf("%d\t",b[j][k]);
		}
		printf("\n");
	}
	printf("\n******************************************************\n");
	
	for(j=0;j<3;j++)
	{
		for(k=0;k<3;k++)
		{
			printf("%d\t",a[j][k]+b[j][k]);
		}
		printf("\n");
	}
	
}
