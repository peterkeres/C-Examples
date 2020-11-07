//
//  main.c
//  worksheet_4_prob_2
//
//  Created by peter k on 2/17/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

typedef struct Car
{
    char *name;
    struct Car *car1;
} Car;

int main(int argc, const char * argv[]) {
    puts("\n\nPROGRAM START\n");
    
    Car aCar;
    Car bCar;
    Car arrCar[30];
    Car * carPtr = &aCar;
    
    bCar.name = "ford truck";
    carPtr -> name = "doge ram";
    // here we are setting the pointer within our stuct/class to an address of another instances of that stuct/class
    carPtr -> car1 = &bCar;
    
    printf("Name of a car: %s\n", carPtr -> name);
    // we have to go 2 layser deep to get the field name we need
    printf("Name of b car within a car: %s\n ", carPtr->car1->name);
    
    puts("\nPROGRAM END\n");
    return 0;
}
