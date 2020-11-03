/*
    NAME: peter keres
    DATE: jan 11 2019
    purpose: the answer to problem 2 on lab 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//methods
int rollD();
int printTotal();
int testRand();

//gobol var
int totals[13] ={}, die1 = 0, die2 = 0, roll = 0;


int main()
{
    printf("welcome to the dice rolling program!\n\n");

    rollD();
    printTotal();


    printf("\n PROGRAM END \n");
    return 0;
}


int rollD(){
    srand( time(NULL) );

    for (int i = 0; i < 36000; i++){

        //gives me 2 random dice rolls
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;

        //add the 2 dice rolls to get a one "final" roll
        roll = die1 + die2;

        //adds to the counts in the array, every number isbetween 2-12 so we can sub 2 to get 1-10
        totals[roll] ++;
    }

    return 0;
}

int printTotal(){

    printf("  2       3       4       5       6       7       8       9       10       11       12  \n");
    printf("-----   -----   -----   -----   -----   -----   -----   -----   ------   ------   ------\n");

    printf("%4d %7d %7d %7d %7d %7d %7d %7d %8d %8d %7d\n", totals[2], totals[3], totals[4], totals[5], totals[6], totals[7],
                                                           totals[8], totals[9], totals[10], totals[11], totals[12]);

    /*
    THIS IS TO TEST THAT ALL NUMBERS FALL WITHIN THE RANGE I WANTED

    printf("\n\nCHECK TO SEE IF ALL ROLLS FELL INTO THE RANGE I WANTED\n");
    int totalsT = totals[2] + totals[3] + totals[4] + totals[5] + totals[6] + totals[7] + totals[8] + totals[9]
                    + totals[10] + totals[11] + totals[12];

    printf("if one then ok, else need to check math: %d", (totalsT / 36000) );
    */


    return 0;
}

