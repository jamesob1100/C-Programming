/*
author: james obrien
date: 11.03.25
purpose: input a country and return capital of that country if in array list
*/

#include <stdio.h>
#include <string.h>

#define SIZE 10
#define INPUT_SIZE 20

int main()
{
    char *countries[SIZE] = {"Australia", "Belgium", "China", "Denmark", "England",
                              "France", "Greece", "Ireland", "Scotland", "Wales"};
    char *capitals[SIZE] = {"Canberra", "Brussels", "Beijing", "Copenhagen", "London",
                             "Paris", "Athens", "Dublin", "Edinburgh", "Cardiff"};
    char input[INPUT_SIZE];
    int found = 0;

    printf("Enter a country: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for (int i = 0; i < SIZE; i++)
    {
        if (strcmp(input, countries[i]) == 0)
        {
            printf("The capital of %s is %s.\n", countries[i], capitals[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Country not found in the list.\n");
    }

    return 0;
}
