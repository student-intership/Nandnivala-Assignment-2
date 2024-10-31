#include <stdio.h>

main() 
{
    char str[20];
    int i,vowels = 0, consonants = 0, digits = 0, specialChars = 0;

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse through each character in the string
    for (i = 0; str[i] != '\0'; i++) 
	{
        char ch = tolower(str[i]); // Convert to lowercase for easy comparison

        // Check if character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
		{
            vowels++;
        }
        // Check if character is a consonant
        else if (ch >= 'a' && ch <= 'z')
		 {
            consonants++;
        }
        // Check if character is a digit
        else if (isdigit(ch)) 
		{
            digits++;
        }
        // If it's not a vowel, consonant, or digit, it's a special character
        else if (!isspace(ch)) 
		{
            specialChars++;
        }
    }

    // Display counts
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

}

