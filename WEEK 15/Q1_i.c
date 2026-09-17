/*
author: james obrien
date: 11.03.25
purpose: enter a name and compare with array of names, if in list greet the name, else print name not found
*/

#include <stdio.h>
#include <string.h>

#define SIZE 10
#define NAME 11

int main()
{
    char *names[SIZE] = {"Aidan", "Jacob", "Ethan", "Nicholas", "Matthew",
                         "Emma", "Emily", "Maddison", "Kaitlyn", "Sophia"};
    char name[NAME];
    int found = 0;
    int i;
    
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; //removes null character for comparison

    for(i=0;i<SIZE;i++)
    {
        if(strcmp(name,names[i]) == 0)
        {
            printf("Welcome %s\n", name);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Name not found\n");
    }

    return 0;
}