#include<stdio.h>
 fibbo()
{
	int n;
	int n1=0,n2=1,i;
	printf("Enter Terms :");
	scanf("%d",&n);
	printf("%d\n",n1);
	printf("%d\n",n2);
	
	for(i=3;i<=n;i++)
	{
		int n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;//swapping of no
		n2=n3;//swapping of no
	}
}
main()
{
	fibbo();
}
