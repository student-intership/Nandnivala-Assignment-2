#include<stdio.h>

con()
{
	char a[25];
	char b[25];
	int i,j;
	printf("Enter String : ");
	gets(a);
	printf("Enter String : ");
	gets(b);
	
	
	for(i=0;a[i]!='\0';i++);
	
	for(j=0;a[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	
	printf("Merge string : %s", a);
	
	printf("\nLength of string is : %d",strlen(a));
	
}

main()
{
	con();
}
