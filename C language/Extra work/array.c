#include <stdio.h>

main() {
    int arr[10];
    int i, j, temp;
    int max, min;

    // Input 10 integers from the user
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    max = min = arr[0];

    // Find maximum and minimum values
    for (i = 1; i < 10; i++)
	 {
        if (arr[i] > max)
		 {
            max = arr[i];
        }
        if (arr[i] < min)
		 {
            min = arr[i];
        }
    }

    // Display max and min values
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    // Sort the array in ascending order using bubble sort
    for (i = 0; i < 10 - 1; i++) 
	{
        for (j = 0; j < 10 - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
            
    printf("Array in ascending order:\n");// Display sorted array
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

