/*
    NAME: peter keres
    DATE: jan 9 2019
    purpose: the answer to problem 2 on lab 3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1;

    printf("TALBE HEADING\n\n");
    printf(" n          n^2\n");
    printf("---        -----\n");

    while (n < 11){
            printf("%2i ......... %i\n", n, n*n);
            n++;
    }

    return 0;
}
