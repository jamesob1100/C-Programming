/*
author: james obrien
date: 11.03.25
purpose: compares the user-entered string with "Hello World", checks for occurrences of the substring "is" in the input and counts them.
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

// Function to compare the input string with "Hello World"
void compareString(const char *input)
{
    if (strcmp(input, "Hello World") == 0)
    {
        printf("The entered string matches 'Hello World'.\n");
    }
    else
    {
        printf("The entered string does not match 'Hello World'.\n");
    }
}

// Function to count occurrences of "is" in the input string
int countSubstringOccurrences(const char *input, const char *substring)
{
    int count = 0;
    const char *temp = input;
    while ((temp = strstr(temp, substring)) != NULL)
    {
        count++;
        temp += strlen(substring); // Move past the last found occurrence
    }
    return count;
}

int main()
{
    char input[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline character

    compareString(input);

    int occurrences = countSubstringOccurrences(input, "is");
    if (occurrences > 0)
    {
        printf("The substring 'is' occurs %d times in the entered string.\n", occurrences);
    }
    else
    {
        printf("The substring 'is' was not found in the entered string.\n");
    }

    return 0;
}
