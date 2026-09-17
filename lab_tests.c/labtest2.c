/*
author: james obrien
date: 8/4/25
purpose: create a structure to store information about a person, 
*/

#include <stdio.h>
#include <string.h>

//symbolic names
#define F_NAME 11 //first name
#define S_NAME 21 //surname
#define DOB 11 //date of brith
#define EVNT 30 // event
#define CNTRY 30 //country

//structure to store athlete information
struct person {
    char firstName[F_NAME];
    char surname[S_NAME];
    char country[CNTRY];
    char dateOfBirth[DOB]; // Format: DD/MM/YYYY
    float height;
    float weight;
    char event[EVNT];
};

void info (int); //function to input athlete information
void srch(struct person); //function to check for certain participant

int main() 
{
    int num = 0;
    int i = 0;

    //read in final amount of participants
    printf("Enter final amount of contestants: ");
    scanf("%d", &num);

    //function call to input information of final contestants
    //parameter is entered amount of final contestants
    info(num);

    return 0;
} //end of main


//start of function
void info (int part)
{
    int i = 0;
    int num = part;
    int cycle = 1;

    //sets amount of athletes as final number of participants
    struct person athlete[num];

    // for loop to enter data for athletes
    for(i=0;i<num;i++)
    {
        printf("Athlete %d: \n", cycle);

        printf("Enter first name: ");
        scanf("%s", athlete[i].firstName);
        
        printf("Enter surname: ");
        scanf("%s", athlete[i].surname);
        
        printf("Enter date of birth (DD/MM/YYYY): ");
        scanf("%s", athlete[i].dateOfBirth);
        
        printf("Enter height (in cm): ");
        scanf("%f", &athlete[i].height);
        
        printf("Enter weight (in kg): ");
        scanf("%f", &athlete[i].weight);
        
        printf("Enter country of citizenship: ");
        scanf("%s", athlete[i].country);

        printf("Enter event of participation: ");
        scanf("%s", athlete[i].event);

        cycle++;
    }

    //for loop to cycle through entered participants and check for a specific person
    for(i=0;i<num;i++)
    {
        srch(athlete[i]);
    }

} //end of function to input information

//search function to compare participant names
void srch(struct person athlete)
{
    int i = 0;
    //declaring first + second names to be searched for
    char fname[F_NAME] = {"Paddy-Jim"};
    char sname[S_NAME] = {"O'Brien"};

    //nested if block to check is entered participant name match
    //if match, printf stating he is participating
    if(strcmp(athlete.firstName, fname) == 0)
    {
        if(strcmp(athlete.surname, sname) == 0)
        {
            printf("\nPaddy Jim O'Brien is competing this year");
        }
    } 
}//end of search function