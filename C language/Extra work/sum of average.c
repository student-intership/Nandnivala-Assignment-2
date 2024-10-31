#include <stdio.h>

main() 
{
    int N, i;
    float sum = 0, average;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare an array to store the numbers
    int numbers[N];

    // Input the elements
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];  // Calculate sum
    }

    // Calculate average
    average = sum / N;

    // Display the sum and average
    printf("Sum of all numbers = %.2f\n", sum);
    printf("Average of the numbers = %.2f\n", average);

}

