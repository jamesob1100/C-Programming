/*
author: james obrien
date: 11.03.25
purpose: Counts the number of vowels in the entered string, computes the length of the string, displays the string in reverse, 
         concatenates the input string to "I entered the string " and prints the result.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

// Function to count the number of vowels in the string
int countVowels(const char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    return count;
}

// Function to reverse the string
void reverseString(const char *str, char *reversed)
{
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';
}

// Function to concatenate input string to the predefined sentence
void concatenateSentence(char *result, const char *input)
{
    strcpy(result, "I entered the string ");
    strcat(result, input);
}

int main()
{
    char input[MAX_LENGTH];
    char reversed[MAX_LENGTH];
    char result[MAX_LENGTH + 30]; // Extra space for concatenation

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline character

    int vowelCount = countVowels(input);
    printf("Number of vowels: %d\n", vowelCount);

    printf("Number of characters: %lu\n", strlen(input));

    reverseString(input, reversed);
    printf("Reversed string: %s\n", reversed);

    concatenateSentence(result, input);
    printf("%s\n", result);

    return 0;
}
