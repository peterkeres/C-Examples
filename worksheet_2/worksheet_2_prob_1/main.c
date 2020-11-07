//
//  main.c
//  worksheet_2_prob_1
//
//  Created by peter k on 2/14/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // loop 10 times
    for (unsigned int x = 1; x <= 10; ++x) {
        if (x == 5) {
            printf("\nBroke out of loop at x == %u\n", x);
//**********************___NOTES____***********************************************
// break is a keyword, it stops this loop at this line and instly exits the loop. stoping at the current ietration
            break; // break loop only if x is 5
        }
        printf("%u ", x);
    }
    return 0;
}
