//
//  main.c
//  worksheet_2_prob_3
//
//  Created by peter k on 2/14/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    printf("\nSTRAT OF PROGRAM\n\n");
    
//****************************---NOTES---*******************************************************
// when ever using the random function, you have to make a "seed" for it so it has a strating proint for
    //making the random numbers
// to make the seed, we are using the system time clock, becuase each time we run the program, this will be
    // as close to random as we can get. this is done by using time(null).
// type 'size_T' pretty much is a short hand for 'unsigned int'
// time is apart of the <time.h> hearder file, and random/srand is part of <stdlib.h> hearder file
    size_t seed = time(NULL);
    srand(seed);
// unsidgend in or size_T , means it is a int but can only be posivtive. this allwos the int data type
    // to hold a larger number but it can only be positive
    unsigned int intRandom = 0;
    
    for (int i = 0; i < 5; i++)
    {
// to use the ranomd funciotn to get random number, the format is 0 - (number - 1)
        // example rand() % 100 == 0 - 99
        // if you want to shift the numbers over, you have to add the results. so like + 1 would get 1-100
        intRandom = (rand() % 100) + 1;
        printf("the %dth Random number is : %d\n", i, intRandom);
    }
    
    printf("\n\nEND OF PROGRAM\n");
    return 0;
}
