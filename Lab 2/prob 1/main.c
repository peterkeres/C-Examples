#include <stdio.h>
#include <stdlib.h>


/*
    NAME: peter keres
    DATE: jan 8 2019
    PURPOSE: answering questions 1 of lab 2
*/
int main()
{
    float degreesF = 27.0, degreesC = 0.0;

    degreesC = (degreesF - 32) / 1.8;

    printf("%f degrees in Celsius is %f", degreesF, degreesC);
    return 0;
}
