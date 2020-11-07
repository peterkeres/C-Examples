//
//  main.c
//  worksheet_2_prob_2
//
//  Created by peter k on 2/14/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // loop 10 times
    for (unsigned int x = 1; x <= 10; ++x) {
        // if x is 5, continue with next iteration
        if (x == 5) {
            printf("\nContinue used. x == %u\n", x);
//**********************___NOTES____***********************************************
// continue is a keyword that will stop this interation of the loop and instally go to the next one
            continue;
        }
        printf("%u ", x); // display value of x
    }
    printf("\n");
    return 0;
}


