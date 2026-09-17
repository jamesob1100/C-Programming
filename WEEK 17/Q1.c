/*
author: james obrien
date: 18.03.25
purpose: define C structures that represent various real-world entities
*/

#include <stdio.h>

// (a) Structure for a playing card
struct PlayingCard {
    char rank[10];  // e.g., "Five"
    char suit[10];  // e.g., "Diamonds"
};

// (b) Structure for a stock record
struct StockRecord {
    int stockNumber;
    char stockDescription[20];
    int stockQuantity;
};

// (c) Structure for a library book record
struct LibraryBook {
    char ISBN[13];
    char bookTitle[30];
    char author[25];
    float price;
};

// (d) Structure for a customer record
struct CustomerRecord {
    unsigned int customerNumber;
    char name[25];
    char address[45];
    double outstandingBalance;
};

// (e) Structure for a transaction record
struct TransactionRecord {
    char transactionType;
    int date[3];  // [day, month, year]
    float amount;
};

// (f) Structure for time in a 12-hour format
struct TimeOfDay {
    int hours;
    int minutes;
    int seconds;
    char period[3]; // "AM" or "PM"
};

// (g) Structure for geographical coordinates
struct GeoCoordinates {
    int degrees;
    int minutes;
    char direction; // 'N', 'S', 'E', 'W'
};

// (h) Structure for a sports league team record
struct TeamRecord {
    char teamName[20];
    int winsHome;
    int drawsHome;
    int lossesHome;
    int winsAway;
    int drawsAway;
    int lossesAway;
};

int main() {
    // Example usage of structures
    struct PlayingCard card = {"Five", "Diamonds"};
    struct StockRecord stock = {1001, "Widget A", 50};
    struct LibraryBook book = {"1234567890123", "C Programming", "Dennis Ritchie", 29.99};
    struct CustomerRecord customer = {1, "John Doe", "123 Elm St", 100.50};
    struct TransactionRecord transaction = {'D', {12, 3, 2024}, 200.75};
    struct TimeOfDay time = {10, 30, 45, "AM"};
    struct GeoCoordinates location = {40, 30, 'N'};
    struct TeamRecord team = {"Red Warriors", 5, 2, 3, 4, 1, 5};
    
    return 0;
}
