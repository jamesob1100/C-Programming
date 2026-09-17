/*
author: james obrien
date: 18.03.25
purpose: assigns values to each member of stock_item, accepts user input for each member, displays the values of each member
*/

#include <stdio.h>
#include <string.h>

struct stock_record {
    int no;
    char description[21];
    float price;
    int qty;
};

int main() {
    struct stock_record stock_item;

    // (a) Assign values to each member
    stock_item.no = 101;
    strcpy(stock_item.description, "Wireless Mouse");
    stock_item.price = 29.99;
    stock_item.qty = 50;

    // (b) Input values from the user
    printf("Enter stock number: ");
    scanf("%d", &stock_item.no);
    
    printf("Enter description: ");
    scanf(" %s", stock_item.description);
    
    printf("Enter price: ");
    scanf("%f", &stock_item.price);
    
    printf("Enter quantity: ");
    scanf("%d", &stock_item.qty);

    // (c) Display values
    printf("\nStock Details:\n");
    printf("Stock Number: %d\n", stock_item.no);
    printf("Description: %s\n", stock_item.description);
    printf("Price: %.2f\n", stock_item.price);
    printf("Quantity: %d\n", stock_item.qty);

    return 0;
}