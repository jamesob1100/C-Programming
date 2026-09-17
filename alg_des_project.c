/*
author: james obrien
date: 19/04/25
purpose: a project which sorts and merges 4 product lists, searches for a product, and prints a summary report
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRODUCTS 10
#define NAME 50
#define NUM_FILE 4

//struct for each product, including product id, its name, its weight
typedef struct 
{
    int product_id;
    char name[NAME];
    float weight;

} Product;

//struct for summary report, includes the product id and count of how many of that id
typedef struct 
{
    int product_id;
    int count;

} Summary;

//merge sort functions
void mergeSort(Product arr[], int, int); 
void merge(Product arr[], int, int , int); 

//binary search function
int binarySearch(Product arr[], int, int, float);

//summary generator function
void generateSummary(Product products[], int size, Summary summary[], int *summaryCount);

//print products function
void printProducts(Product products[], int size);

//print summary function
void printSummary(Summary summary[], int count);

//start of main
int main() 
{
    //structs of 10 products, 4 lists
    Product team1[PRODUCTS] = 
    {
        {101, "Filter", 0.5}, 
        {102, "Brake Pad", 1.2}, 
        {103, "Spark Plug", 0.3},
        {104, "Oil Cap", 0.2}, 
        {105, "Wiper Blade", 0.8}, 
        {106, "Battery", 5.0},
        {107, "Alternator", 3.5}, 
        {108, "Fan Belt", 0.7}, 
        {109, "Headlight", 2.0},
        {110, "Air Filter", 1.0}
    };

    Product team2[PRODUCTS] = 
    {
        {111, "Battery", 0.7}, 
        {112, "Headlight", 1.3}, 
        {113, "Radio", 0.4},
        {114, "Oil", 0.5}, 
        {115, "Wiper Fluid", 1.3}, 
        {116, "Wheel", 7.0},
        {117, "Alloys", 3.5}, 
        {118, "Carborator", 0.7}, 
        {119, "Flux Capacitator", 2.0},
        {120, "Light Glass", 1.0}
    };

    Product team3[PRODUCTS] = 
    {
        {121, "Radiator", 4.2}, 
        {122, "Thermostat", 0.6}, 
        {123, "Hose", 0.4},
        {124, "Muffler", 5.6}, 
        {125, "Exhaust", 6.3}, 
        {126, "Catalytic Converter", 4.8},
        {127, "Shock Absorber", 2.3}, 
        {128, "Strut", 2.5}, 
        {129, "Tail Light", 1.2},
        {130, "Grille", 1.1}
    };

    Product team4[PRODUCTS] = 
    {
        {131, "Fuse", 0.1}, 
        {132, "Relay", 0.3}, 
        {133, "Sensor", 0.6},
        {134, "Control Arm", 6.8}, 
        {135, "Ball Joint", 2.1}, 
        {136, "Tie Rod", 1.8},
        {137, "Axle", 7.3}, 
        {138, "Drive Shaft", 6.7}, 
        {139, "Radiator Fan", 3.9},
        {140, "Heater Core", 2.6}
    };

    //copy all files into one file using memcpy, size is number of files * number of products
    Product allProducts[PRODUCTS * NUM_FILE];
    memcpy(allProducts, team1, sizeof(team1));
    memcpy(allProducts + 10, team2, sizeof(team2));
    memcpy(allProducts + 20, team3, sizeof(team3));
    memcpy(allProducts + 30, team4, sizeof(team4));

    //size for merge sort, search for binary search, sumcount for summary report
    int size = PRODUCTS * NUM_FILE; //=40
    float searchWeight = 0;
    int summaryCount = 0;

    //print original product lists, unsorted
    printf("Original Product List:\n");
    printProducts(allProducts, size);

    //sort products by weight using merge sort
    mergeSort(allProducts, 0, size - 1);
    printf("\nSorted by Weight:\n");
    printProducts(allProducts, size);

    //search for product by weight
    printf("\nEnter weight to search for: ");
    scanf("%f", &searchWeight);
    int found = binarySearch(allProducts, 0, size - 1, searchWeight);

    if (found != -1)
    {
        printf("\nFound product with weight %.2f: %s (ID: %d)\n", searchWeight, allProducts[found].name, allProducts[found].product_id);
    }
    else
    {
        printf("\nNo product found with weight %.2f\n", searchWeight);
    }

    //generate a summary report of produts
    Summary summary[PRODUCTS * 4];
    generateSummary(allProducts, size, summary, &summaryCount);
    printf("\nProduct Summary:\n");
    printSummary(summary, summaryCount);

    return 0;
}//end of main

//start of merge sort
void mergeSort(Product arr[], int l, int r) 
{
    if (l < r) 
    {
        int m = l + (r - l) / 2; //find the middle
        mergeSort(arr, l, m); //recursively sort the left
        mergeSort(arr, m + 1, r); //recursively sort the right
        merge(arr, l, m, r); //merge function to merge all divided arrays into one sorted array
    }

    return;
}

//merge all product lists
void merge(Product arr[], int l, int m, int r) 
{
    int i = 0;
    int j = 0; 
    int k = 0;
    int n1 = m - l + 1; //stores size of left divided
    int n2 = r - m; //stores side of right divided
    Product L[n1], R[n2];

    for (i = 0; i < n1; i++) 
    {
        L[i] = arr[l + i];
    }//L[] has left elements stored

    for (j = 0; j < n2; j++) 
    {
        R[j] = arr[m + 1 + j];
    }//R[] has right elements stored

    i = 0; 
    j = 0; 
    k = l;

    //compare L[] with R[] and if left is smaller, put into array, else put right in
    while (i < n1 && j < n2) 
    {
        if (L[i].weight <= R[j].weight)
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    //if any elements remain in L[] or R[], copy directly as they are already sorted
    while (i < n1) 
    {
        arr[k++] = L[i++];
    }
    while (j < n2) 
    {
        arr[k++] = R[j++];
    }

    return;
}//end of merge sort

//binary search alg
int binarySearch(Product arr[], int left, int right, float target) 
{
    //searches array while left is less or equal to right
    while (left <= right) 
    {
        int mid = left + (right - left) / 2; //find mid to avoid overflow

        if (arr[mid].weight == target)//if mid is the weight, return
        {
            return mid;
        }
        else if (arr[mid].weight < target)//if less, search left
        {
            left = mid + 1;
        }
        else//if more, search right
        {
            right = mid - 1;
        }
    }

    //if not found, return -1
    return -1;
}//end of binary search

//summary report generator
void generateSummary(Product products[], int size, Summary summary[], int *summaryCount) 
{
    *summaryCount = 0; //initialise count
    int found = 0; //checks for duplicates

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < *summaryCount; j++) 
        {
            if (summary[j].product_id == products[i].product_id) //loop to check for duplicate entries and breaks
            {
                summary[j].count++;
                found = 1;
                break;
            }
        }
        
        if (found==0) //if not duplicate, adds product to summary list, assigns it a count, increments count to 1
        {
            summary[*summaryCount].product_id = products[i].product_id;
            summary[*summaryCount].count = 1;
            (*summaryCount)++;
        }
    }

    return;
}//end of summary report generator

//function to print products
void printProducts(Product products[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("ID: %d | Name: %s | Weight: %.2f\n", products[i].product_id, products[i].name, products[i].weight);
    }

    return;
}//end

//function to print summary
void printSummary(Summary summary[], int count) 
{
    for (int i = 0; i < count; i++) 
    {
        printf("Product ID: %d | Count: %d\n", summary[i].product_id, summary[i].count);
    }

    return;
}//end