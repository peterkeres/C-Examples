#include <stdio.h>
#include <stdlib.h>


/*
    NAME: peter keres
    DATE: jan 8 2019
    PURPOSE: answering questions 4 of lab 2
*/

int main()
{
    int x1 = 10, x2=12, x3=1, x4=5, x5=7, x6=10;
    float avg = (float)x1 + (float)x2+ (float)x3 + (float)x4+ (float)x5 + (float)x6;

    avg /= 6;

    printf("the average of the set of numbers is %f", avg);

    return 0;
}
