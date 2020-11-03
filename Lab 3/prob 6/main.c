/*
    NAME: peter keres
    DATE: jan 9 2019
    purpose: the answer to problem 6 on lab 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //make the headings for the table
    printf("TALBE HEADING\n\n");
    printf(" decimal     binary     octal     hexadecimal\n");
    printf("---------   --------   -------   ------------- \n\n");

    //the loop to do thought all numbers from 1 to 256
    for (int i = 1; i < 256; i++){
        //print out the dec
        printf("  %3i       ", i);

        //print out the binary
        int num = i;
        for (int j = 7; j >= 0; j--){       // loop goes thought each "slot" in binary
            float pos = pow(2,j);           // this gets us the position of what binary slot to look at
            int temp = num / (int)pos;      // too see if number is more then the slot we are looking at aka needs a 1

            if (temp > 0){
                printf("1");
                num = num - (int)pos;
            }
            else{
                printf("0");
            }

        }
        //print out the octal
        printf("      %3o", i);
        //print out the hex
        printf("          %x", i);
        printf("\n\n");
    }

    return 0;
}
