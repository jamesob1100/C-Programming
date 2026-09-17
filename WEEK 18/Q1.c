/*
author: james obrien
date: 25.03.25
purpose: manage and display travel information for airline passengers using structures and functions
*/

#include <stdio.h>
#include <string.h>

#define SIZE 30
#define S_NAME 21
#define S_NUM 5

// Define the structure template for travel information
struct TravelInfo {
    char airline[SIZE];
    int flightNumber;
    char surname[S_NAME];
    char seatNumber[S_NUM];
    char destination[SIZE];
    int numBags;
};

// Function to enter travel information
void enterTravelInfo(struct TravelInfo *passenger) {
    printf("Enter airline name: ");
    scanf("%s", passenger->airline);
    
    printf("Enter flight number: ");
    scanf("%d", &passenger->flightNumber);
    
    printf("Enter passenger surname: ");
    scanf("%s", passenger->surname);
    
    printf("Enter seat number (e.g., 12A, 25C): ");
    scanf("%s", passenger->seatNumber);
    
    printf("Enter destination: ");
    scanf("%s", passenger->destination);
    
    printf("Enter number of bags: ");
    scanf("%d", &passenger->numBags);
}

// Function to display travel information
void displayTravelInfo(struct TravelInfo passenger) {
    printf("\nPassenger Travel Details:\n");
    printf("Airline: %s\n", passenger.airline);
    printf("Flight Number: %d\n", passenger.flightNumber);
    printf("Surname: %s\n", passenger.surname);
    printf("Seat Number: %s\n", passenger.seatNumber);
    printf("Destination: %s\n", passenger.destination);
    printf("Number of Bags: %d\n", passenger.numBags);
}

int main() {
    struct TravelInfo passenger1, passenger2;

    // (a) Enter travel information for two passengers
    printf("Enter details for Passenger 1:\n");
    enterTravelInfo(&passenger1);
    
    printf("\nEnter details for Passenger 2:\n");
    enterTravelInfo(&passenger2);

    // (b) Display travel information for both passengers
    printf("\nDisplaying Passenger 1 Information:\n");
    displayTravelInfo(passenger1);
    
    printf("\nDisplaying Passenger 2 Information:\n");
    displayTravelInfo(passenger2);

    return 0;
}
