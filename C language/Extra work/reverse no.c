
#include <stdio.h>

main() {
    int num, sum = 0, reverse = 0, digit, originalNum;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Calculate the sum of digits and reverse the number
    while (num != 0) {
        digit = num % 10;       // Get the last digit
        sum += digit;           // Add it to the sum
        reverse = reverse * 10 + digit;  // Build the reversed number
        num /= 10;              // Remove the last digit
    }

    // Display the results
    printf("Sum of digits of %d: %d\n", originalNum, sum);
    printf("Reversed number of %d : %d\n", originalNum, reverse);

}

