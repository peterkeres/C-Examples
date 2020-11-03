/*
    NAME: peter keres
    DATE: jan 9 2019
    purpose: the answer to problem 3 on lab 3
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    printf("TALBE HEADING\n\n");
    printf(" n          n!\n");
    printf("---        ----\n");

    for (int i = 0 ; i < 11; i++){
        // when the number is 0 or 1
        if (i == 0 || i == 1){
            printf("%2i ......... 1\n", i);
        }
        //rest of the numbers
        else{
            n = i;
            for (int j = i ; j > 2; j--){   // no need to add the fact of 0 or 1, they can be skipped
                n = n * (j-1);
            }
            printf("%2i ......... %i\n", i, n);
        }
    }
    return 0;
}
