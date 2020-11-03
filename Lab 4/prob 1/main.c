/*
    NAME: peter keres
    DATE: jan 11 2019
    purpose: the answer to problem 1 on lab 4
*/


#include <stdio.h>
#include <stdlib.h>

//methods
int getInput ();
int printArray ();

//global var
int array[20] = {};

int main()
{
    printf("wlecome to the array printing program!\n");

    getInput();
    printArray();

    printf("PROGRAM END\n");

    return 0;
}

//this fucntions will get input from the user and enter into the array
// will also handle input valadition
int getInput(){

    int user = 0, count = 0;

    while ( count < 20){

        printf("please enter a number between 10 and 100\n");

        if (scanf("%d", &user) != 1){
            printf("invald input, please try again");
        }
        else if (user > 100 || user < 10 ){
            printf("that number was not in the range, please try again");
        }
        else{
            array[count] = user;
            count ++;
        }

        //clear out the keyboar que
        while (getchar() != '\n');
    }

    return 0;
}

//this will print out the items in the array that do not repeat
int printArray(){

    int temp = 0, pass = 1, doom = 1;

    printf("Here are the nubers of non repeating values\n");

    for(int i = 0; i < 20; i++){
        temp = array[i];

        //checks each items in the array vs every other item in the array
        for (int j = 0 ; j < 20; j++){

            if (i == j){
            //if the item points to it slef, do nothing
            }
            //if the items equals another item, we set the pass flag to false
            else if (temp == array[j]){
                pass = 0;
            }
        }

        //checking the pass flag on to print the item or not
        if (pass > 0){
            printf("%d   ", temp);
            doom = 0;
        }

        //resetting flag
        pass = 1;
    }

    //in case of the "dooms day event" where all numbers are the same
    if (doom > 0){
        printf("all the items in the array are the same number!");
    }
    printf("\n");

    return 0;
}
