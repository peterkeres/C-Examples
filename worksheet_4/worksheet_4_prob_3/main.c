//
//  main.c
//  worksheet_4_prob_3
//
//  Created by peter k on 2/17/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

typedef struct Person
{
    char * name;
    struct Person * pInsdie;
} Person;

int main(int argc, const char * argv[]) {
    puts("\n\nPROGRAM START\n");
    
    Person aPerson;
    Person arrPerson[25];
    Person * ptrPerson = &aPerson;
    
    ptrPerson -> name = "steve";
    
    printf("Name is: %s\n", ptrPerson->name);
    
    puts("\n\nPROGRAM END\n");
    return 0;
}
