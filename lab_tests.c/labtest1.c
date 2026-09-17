/*
Program Description: random number generator between 1-20, runs continuously until asked to stop, displays 5 different random numbers, displays highest and lowest numbers
Author: James O'Brien
Date: 26.11.24
*/

#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes

//symbolic name to define array size
#define SIZE 5

int main()
{
    int num = 0;
    int array[SIZE] = {0,0,0,0,0};
    int i = 0;
    int highest = 0;
    int lowest = 0;
    int start = 0;
    // place any extra variables here
    
    //loop block which keeps program running based on user input
    do
    {
        //welcome message that asks for input to start or end program, scanf to read in choice
        printf("Enter your selection: \n");
        printf("1. Generate five random numbers (1-20) \n2. End program \n");
        scanf("%d", &start);

        //if user enters 2, end
        if(start == 2)
        {
            printf("\nBye bye");
            break;
        }

        //if user enters 1, start
        if(start == 1)
        {
            // seed the random number generator with a range 0 – large number
            srand(time(NULL));
                    
            // num is assigned a random number between 1 – 20 and stored in an array
            for(i = 0; i < SIZE; i++)
            { 
                num = (rand() % 20) + 1;
                array[i] = num;
            }
            
            //loop to have different random numbers, checks previous numbers and re-randomises until they are different
            //loop starts at second number and checks all previous numbers
            for(i = 1; i < SIZE; i++)
            {
                while(array[i] == array[i-1])
                {
                    num = (rand() % 20) + 1;
                    array[i] = num;
                }

                while(array[i] == array[i-2])
                {
                    num = (rand() % 20) + 1;
                    array[i] = num;
                }

                while(array[i] == array[i-3])
                {
                    num = (rand() % 20) + 1;
                    array[i] = num;
                }

                while(array[i] == array[i-4])
                {
                    num = (rand() % 20) + 1;
                    array[i] = num;
                }
            }

            //initialise highest at start of array
            highest = array[0];

            //loop through array to calculate the highest number
            for(i = 0; i < SIZE; i++)
            {
                if(highest < array[i])
                {
                    highest = array[i];
                }
            }

            //initialise lowest at the start of the array
            lowest = array[0];

            //loop through array to calculate the lowest number
            for(i = 0; i < SIZE; i++)
            {
                if(lowest > array[i])
                {
                    lowest = array[i];
                }
            }

            //print all the random numbers
            for(i = 0; i < SIZE; i++)
            {
                printf("Random number %d is %d\n", i, array[i]);
            }


            //print highest and lowest numbers
            printf("\nHighest number is %d\nLowest number is %d\n", highest, lowest);
        }
    }
    while(start != 2);
    
    /*
    //elif block to end program, based on read in result from welcome message
    else
    {
        printf("Bye Bye\n");
    }
    */

    return 0;
    
} // end main