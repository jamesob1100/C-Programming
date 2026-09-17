/*
author: james obrien
date: 18.03.25
purpose: collects personal details from the user, displays the entered details, copies the data to a second person and allows modifications, 
         displays the updated details for the second person.
*/

#include <stdio.h>
#include <string.h>

#define F_NAME 11
#define S_NAME 21
#define DOB 11
#define E_COL 15
#define CNTRY 30

// Define the structure template for biographical data
struct Person {
    char firstName[F_NAME];
    char surname[S_NAME];
    char dateOfBirth[DOB]; // Format: DD/MM/YYYY
    float height;
    float weight;
    char eyeColor[E_COL];
    char country[CNTRY];
};

int main() {
    struct Person person1, person2;

    // (a) Enter data for person 1
    printf("Enter first name: ");
    scanf("%s", person1.firstName);
    
    printf("Enter surname: ");
    scanf("%s", person1.surname);
    
    printf("Enter date of birth (DD/MM/YYYY): ");
    scanf("%s", person1.dateOfBirth);
    
    printf("Enter height (in cm): ");
    scanf("%f", &person1.height);
    
    printf("Enter weight (in kg): ");
    scanf("%f", &person1.weight);
    
    printf("Enter eye color: ");
    scanf("%s", person1.eyeColor);
    
    printf("Enter country of citizenship: ");
    scanf("%s", person1.country);
    
    // (b) Display the data entered
    printf("\nPerson 1 Details:\n");
    printf("Name: %s %s\n", person1.firstName, person1.surname);
    printf("Date of Birth: %s\n", person1.dateOfBirth);
    printf("Height: %.2f cm\n", person1.height);
    printf("Weight: %.2f kg\n", person1.weight);
    printf("Eye Color: %s\n", person1.eyeColor);
    printf("Country: %s\n", person1.country);
    
    // (c) Copy data to person 2 and modify it
    person2 = person1;
    
    printf("\nModifying person 2's data...\n");
    printf("Enter new first name for person 2: ");
    scanf("%s", person2.firstName);
    
    printf("Enter new height for person 2 (in cm): ");
    scanf("%f", &person2.height);
    
    printf("Enter new weight for person 2 (in kg): ");
    scanf("%f", &person2.weight);
    
    // (d) Display the modified data for person 2
    printf("\nPerson 2 Details (Modified):\n");
    printf("Name: %s %s\n", person2.firstName, person2.surname);
    printf("Date of Birth: %s\n", person2.dateOfBirth);
    printf("Height: %.2f cm\n", person2.height);
    printf("Weight: %.2f kg\n", person2.weight);
    printf("Eye Color: %s\n", person2.eyeColor);
    printf("Country: %s\n", person2.country);

    return 0;
}
