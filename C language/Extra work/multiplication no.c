#include <stdio.h>

int main() {
    int num, i;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Print multiplication table
    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

