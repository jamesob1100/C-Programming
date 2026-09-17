/*
Purpose: to demonstrate use of switch
Author: James OBrien
Date: 15/10/24
*/

#include <stdio.h>

int main()
{
    char letter = 0;

    //scanf statement to enter a letter
    printf("Enter a letter\n");
    scanf("%c", &letter);

    //switch statement to check if letter is a vowl or not
    switch(letter)
    {
        //first case for if letter is a vowl
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        {
            //if letter is vowl print "letter is a vowl"
            printf("letter is a vowl");
            
            break;
        }
        //second case for if letter is a consonant
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        {
            //if letter is a consonant print "letter is not a vowl"
            printf("letter is not a vowl");

            break;
        }
        //set default to print "invalid character entered"
        default:
        {
            printf("invalid character entered");
            break;
        }
    }

    return 0;
}