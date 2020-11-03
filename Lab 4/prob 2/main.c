/*
    NAME: peter keres
    DATE: jan 11 2019
    purpose: the answer to problem 2 on lab 4
*/

#include <stdio.h>
#include <stdlib.h>

//concets
#define MIN 2.00
#define EXTRA 0.50

//methods
int getNum ();
int calculateCharges ();
int printTable ();

//gobal var
float carH[3] = {}, carC[3] = {}, user = 0.0;


int main()
{
    printf("Welcome to the parking charges program\n");

    getNum();
    calculateCharges();
    printTable();

    printf("\n\nPROGRAM ENDING");

    return 0;
}

//this method just gets the hours of how long each car is parked
int getNum(){

    //this program only works for 3 cars, so only a for loop is needed
    for (int i = 0; i < 3; i++){
         printf("please enter the number of hours the car parked.\n");

         // if the input is not a number
         while (scanf("%f", &user) != 1){
            printf("that is an invald input, please try again\n");
            printf("pleae enter the number of hours the car parked.\n");
             //clear out the keyboar que
            while (getchar() != '\n');
        }

        carH[i] = user;
        printf("Thank you!\n");
        //clear out the keyboar que
        while (getchar() != '\n');
    }

    return 0;
}

//this method will figure out how much each car should be charged for their time
int calculateCharges(){

    for (int i = 0; i < 3; i++){
        //checks to see if the car even parked
        if (carH[i] > 0){
            carC[i] = MIN;
        }
        //checks to see if they should be charged extra time
        if (carH[i] > 3){
            carC[i] += ( (carH[i] - 3) * EXTRA );
        }
        //makes sure that no one is charged more then the max amount
        if (carC[i] > 10){
            carC[i] = 10.00;
        }
    }

    return 0;
}


//this method will print the table for the cars and the totals
int printTable(){

    printf("\n Car        Hours        Charge\n");
    printf("-----      -------      ---------\n");

    //prints out the value of each car formated
    for (int i = 0; i < 3; i++){
        printf("%3d %13.2f %13.2f\n", i, carH[i], carC[i]);
    }
    //prints out a final total
    printf("\nTOTAL %10.2f %14.2f\n", (carH[0] + carH[1] + carH[2]), (carC[0] + carC[1] + carC[2]) );

    return 0;
}
