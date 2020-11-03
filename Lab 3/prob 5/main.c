/*
    NAME: peter keres
    DATE: jan 9 2019
    purpose: the answer to problem 5 on lab 3
*/

#include <stdio.h>
#include <stdlib.h>
#define numerator 4

int main()
{
    int user = 0, denom = 1, pass = 0;
    float pi = 0;

    do{
        printf("please enter the apprximation of pie you want to see.\n");

        // user valadition, if scanf returns anyhting not a 1, its a non number
        if (scanf("%d", &user) != 1){
            printf("that is an invald input, please try again\n");
            //clear out the keyboar que
            while (getchar() != '\n');
            pass = 0;
        }
        else{
            pass = 1;
        }
    }while(pass != 1);

    //printing out the number of times pie is to show
    int count = 0;
    do{
        //first number is 4/1
        if (count == 0){
            pi = 4;
        }
        //on every odd count, we are subtracting
        else if ((count % 2) == 1){
            pi = pi - ((float)numerator / (float)denom);
        }
        else{
           pi = pi + ((float)numerator / (float)denom);
        }
        //setting up for next pass
        denom += 2;
        count ++;
    }while (count < user);

    //print out the results
    printf("the caluaction of the terms are %f\n", pi);

    return 0;
}
