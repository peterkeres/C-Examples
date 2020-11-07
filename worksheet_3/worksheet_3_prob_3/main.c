//
//  main.c
//  worksheet_3_prob_3
//
//  Created by peter k on 2/15/19.
//  Copyright © 2019 peter k. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("\n\nSTART OF THE PROGRAM\n\n");
    
    double arrD[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
// this combnation of the size of funcitons, will get us the length of the array
// we are saying the totall size of the array divided by the seize of one element
    size_t arrDSize = sizeof(arrD) / sizeof(arrD[0]);
    double * parrD = arrD;
    double dlbSum =0;
    
    
    for (int i =0; i < arrDSize; i++)
    {
// if we have a pointer to an array, to look at each element we have to look at the base element
// and add a displacment, we put a * so when we get the address of that element as a pointer, we can
// defrenced it and see the value of that spot in memmory
// without the *, we would just get the pointer value, which is a memeory address
        printf("the %dth element of the array is :%lf\n", i+1, *(parrD + i) );
        dlbSum += * (parrD + i);
    }
    
    printf("\nthe sum total of the array is :%lf\n", dlbSum);
    printf("the avg for the array is :%lf\n", dlbSum / arrDSize);
    
    
    printf("\nEND OF PROGRAM\n");
    return 0;
}
