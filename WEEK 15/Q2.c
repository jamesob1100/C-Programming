/*
author: james obrien
date: 11.03.25
purpose: program to read in a sentence, count the number of char, append sentence to end of a string
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

// Function to calculate the number of characters in the sentence
int countCharacters(const char *sentence)
{
    return strlen(sentence);
}

// Function to append the sentence to a predefined string
void appendSentence(char *result, const char *sentence)
{
    strcpy(result, "My sentence is: ");
    strcat(result, sentence);
}

int main()
{
    char sentence[MAX_LENGTH];
    char result[MAX_LENGTH + 20]; // Extra space for the prefix

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline character

    int length = countCharacters(sentence);
    appendSentence(result, sentence);

    printf("Number of characters: %d\n", length);
    printf("%s\n", result);

    return 0;
}
