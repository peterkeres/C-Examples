//
//  main.c
//  worksheet_3_prob_8
//
//  Created by peter k on 2/15/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

void printCharacters (const char *sPtr);

int main(int argc, const char * argv[]) {
    
    char string[] = "print characers of a string";
    
    // puts is a short hand for printf("    \n"), it will print a string too the screen and put a \n at the end
    puts("the string is: ");
    printCharacters(string);
    puts(" ");
    
    return 0;
}


//the const here is making sure that we cant chagne the values of what the sptr is point too
void printCharacters (const char *sPtr)
{
    // size_t is an short hand for unsigned integer
    size_t intSize = 0;
    
    // this forloop just keeps going untill the pointer points to the end of string char '\0'
    // remeber, in c then end of a string is shown with the end of string character
    // the %c stands for character, becuase in c strings are just an array of char's
    for ( ; *sPtr != '\0'; sPtr++) {
        printf("%c", *sPtr);
        intSize++;
    }
    
    puts("  ");
    
    for ( int i =0; i <= intSize; i++) {
        printf("%c", *sPtr);
        sPtr--;
    }
}
