#include <stdio.h>
int main() 
{
    int i;
    char str[100];
    int isPalindrome = 1; // Assume the string is a palindrome

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    int len = strlen(str);

    // Check for palindrome
    for (i = 0; i < len / 2; i++)
	 {
        if (str[i] != str[len - i - 1]) 
		{
            isPalindrome = 0; // Not a palindrome
            break; // Exit loop if a mismatch is found
        }
    }

    // Output result
    if (isPalindrome) 
	{
        printf("The string is a palindrome.\n");
      } 
	  else
	 {
        printf("The string is not a palindrome.\n");
    }
	
}

