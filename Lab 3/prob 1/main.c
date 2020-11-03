/*
    NAME: peter keres
    DATE: jan 9 2019
    purpose: the answer to problem 1 on lab 3
*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int input = 0, passC = 0, failC = 0;

    printf("hello, welcome to the student grades program.\n");

    //getting in info from the user untill the number of students entered is more then 10
    while ( (passC + failC) < 10 ){

        printf("Please enter a 1 if the student passed or a 2 if they failed.\n");
        scanf("%i", &input);

        //the number they entered is correct
        if (input == 1 || input == 2){
            //figuring out if its a pass or fail and adding to that count
            if ( input == 1){
                passC++;
            }
            else{
                failC++;
            }
            printf("great! now enter in the next.\n");
        }
        // then number is greater then what we wanted
        else if (input > 2){
            printf("that number was out of range of what was asked, please try again.\n");
        }
        // its not a number at all
        else{
            printf("you did not enter a number. please try again.\n");
        }

        //to clear out the keyboard que and to reset input
        while (getchar() != '\n');
        // QUESTOIN :  why do i have to clear my input var? shouldnt be re assigned a value when using the scanf above?
        input = 0;
    }

    // print out the results of the tests
    printf("you have %i number of students pass and %i number of students failed.\n", passC, failC);

    //to print out speical message
    if (passC > 7){
        printf("bonus to instructor!\n");
    }

    return 0;
}
