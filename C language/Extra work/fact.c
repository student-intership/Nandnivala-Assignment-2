#include<stdio.h>

fact()
{
	int n,i,fact1=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact1*=i;
	}
	printf("Fctorial Number is : %d ",fact1);
	
}
main()
{
	fact();
}
