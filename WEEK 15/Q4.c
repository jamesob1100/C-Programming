/*
author: james obrien
date: 11.03.25
purpose: expands on Q3 by concatenating word 1 to a string, calculating and displaying the length of that string
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

// Function to concatenate the first word with a predefined string
void concatenateWord(char *result, const char *word)
{
    strcpy(result, "First word entered is ");
    strcat(result, word);
}

// Function to calculate the length of a string
int calculateLength(const char *str)
{
    return strlen(str);
}

int main()
{
    char word1[MAX_LENGTH], word2[MAX_LENGTH];
    char result[MAX_LENGTH + 30]; // Extra space for the prefix

    printf("Enter first word: ");
    scanf("%s", word1);
    
    printf("Enter second word: ");
    scanf("%s", word2);

    if (strcmp(word1, word2) == 0)
    {
        printf("The words are the same.\n");
    }
    else
    {
        printf("The words are different.\n");
    }

    concatenateWord(result, word1);
    printf("%s\n", result);

    int length = calculateLength(result);
    printf("Number of characters: %d\n", length);

    return 0;
}
