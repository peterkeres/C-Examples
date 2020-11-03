/*
    NAME: peter keres
    DATE: jan 9 2019
    purpose: the answer to problem 4 on lab 3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 0, total = 0, hold =0, position = 10;
    printf("please enter a number\n");
    scanf("%i", &input);

    while (input > 0){
            //gets the value we need to add
        hold = input % position;
            //makes the value we are adding to be in the 1's digit
        while (hold > 9){
            hold = hold / 10;
        }
        total = total + hold;
            //this "zeros out" all the positions we have been too
        input = input - (hold * (position / 10));
        position = position * 10;
    }

    printf("the sum of digits is: %i\n", total);

    return 0;
}
