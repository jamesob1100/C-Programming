/*
author: james obrien
date: 11.03.25
purpose: enter two words, use strcmp() to compare them, displays whether the words are the same or different
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

int main()
{
    char word1[MAX_LENGTH], word2[MAX_LENGTH];

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

    return 0;
}
