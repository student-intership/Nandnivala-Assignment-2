#include<stdio.h>

main()
{
	
	int a,b;
	
	printf("Enter Number  : ");
	scanf("%d",&a);
	
	printf("Enter Number : ");
	scanf("%d",&b);
	
	// Arithmetic operations
	printf("Addition : %d ",a+b);
	printf("\nSubstraction : %d",a-b);
	printf("\nMultiplication : %d",a*b);
	printf("\nDivision : %d",a/b);
	
	// Relational operations
    printf("\nRelational Operations:\n");
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    printf("%d\n",a>b);
    printf("%d\n",a<b);
    printf("%d\n",a>=b);
    printf("%d\n",a<=b);
    
    // Logical operations
    printf("\nLogical Operations:\n");
    printf("%d\n",a&&b);
    printf("%d\n",a||b);

}
