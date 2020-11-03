/*
    NAME:  peter keres
    DATE: jan 17 19
    PURPOSE: this is for the 1st question apart of lab 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//methods
void sumF (char *str);
void multF (char *str);


int main()
{
    printf("START OF PROGRAM\n\n");

    char inputBuff[1000] = {};
    char sum[3] = {"sum"};
    char mult[8] = {"multiply"};


    printf("please enter what operation you want to do, followed by the numbers you want to use\n");
    gets(inputBuff);
    //QUESTION: how do check that inputbuff is not bigger then the buffer i set up?

    if (strncmp(inputBuff, sum, 3) == 0){
        printf("enterd sum");
        sumF(inputBuff);
    }
    else if ( strncmp(inputBuff, mult, 8) == 0){
        multF(inputBuff);
    }
    else{
        printf("you entered in a operation i can not do, sorry friend!\n");
    }


    return 0;
}



void sumF (char *str){

    int total = 0, current = 4, subCurrent = 0;
    char subNum[100] = {};

    int length = strlen (str);

    while (current <= length){

        if (str[current] == ' ' || current == length){

            total = total + atoi(subNum);
            subCurrent = 0;
            // QUESTION: how to "clear out" an array of chars
        }
        else{
            subNum[subCurrent] = str[current];
            subCurrent ++;
        }

        current ++;

    }

    printf("total is: %i", total);

}

void multF(char *str){

    int total = 1, current = 9, subCurrent = 0;
    char subNum[100] = {};

    int length = strlen (str);

    while (current < length){

        if (str[current] == ' ' || current == length){

            total = total * atoi(subNum);
            subCurrent = 0;
            // QUESTION: how to "clear out" an array of chars
        }
        else{
            subNum[subCurrent] = str[current];
            subCurrent ++;
        }

        current ++;

    }

    printf("total is: %i", total);

}


