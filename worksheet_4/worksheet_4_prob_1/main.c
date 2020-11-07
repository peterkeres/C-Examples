//
//  main.c
//  worksheet_4_prob_1
//
//  Created by peter k on 2/16/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

// here we are using a stuct, structs are pretty much creating your own data type in c
// its just like creaing a class in java but you CANT put methods in here!
// there are 2 ways to define a struct, im using the typedef version, this way just saves us from having to use 'struct student varnam' when declaring a type of this class
// the name at the end of the brackets is what the name of this struct/class is, its student
// within the struct, we have 2 pointers to a char that we will use to hold a strings, becuase its holding the address of the first char in the string, we can print out the rest
// from that.
// the last one is a pointer to another type of student, think of this like a linked list
// because the struc has yet to be defined, we have to use 'struct structname' in stead of just 'structname'
typedef struct Student
{
    char * name;
    char * number;
    int numberInt;
    
    struct Student * pStudent;
} Student;


int main(int argc, const char * argv[]) {
    puts("\nPROGRAM STARTING\n\n");
    
    //here we are definding instances of this stuct/class
    Student aStudent;
    Student bStudent;
    //here is an array of our struct/class types
    Student arrStudent[40];
    // here is a pointer to a struct/class
    Student * stuPtr = &bStudent;

    //adding values to the fileds in a struct/class is just like it is in java, we use the '.' operator to acces its fields
    //becuase we have a pointer to a string, we can set this field to a whole string and it will put a '\0' at the end for us. it will keep track of the first char in memeory
    aStudent.name = "jhon";
    aStudent.number = "888888eeeeeee8";
    aStudent.numberInt = 2345;
    
    // here becuase we are using a pointer to set the values, we have to use the '->' operator, its a short hand when using pointer and works just like the '.'
    // if not using the ->, we would have to do like this ' (*stuptr).name ' which is just slighty harder to read
    stuPtr -> name  = "pete";
    stuPtr -> number = "420";
    stuPtr -> numberInt = 1234;
    
    // when pringint out a string, or a pointer to a char, we can use the %s and it will proint the string for us
    puts("the following is for A student");
    printf("Name: %s\n", aStudent.name);
    printf("Number: %s\n", aStudent.number);
    printf("Digit: %d\n", aStudent.numberInt);
    
    puts("\nthe following is for B student");
    printf("Name: %s\n", stuPtr->name);
    printf("Number: %s\n", stuPtr->number);
    printf("Digit: %d\n", stuPtr->numberInt);
    
    
    puts("\n\nPROGRAM ENDING");
    return 0;
}
